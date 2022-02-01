CC = gcc
CFLAGS = -g

SRC=src
INC=inc

SRC = $(wildcard Task-1/*.c) \
			$(wildcard Task-2/*.c) \
			$(wildcard Task-3/*.c) 

obj=$(SRC:%.c=%.o)

HDRS=$(shell ls $(INC)/*.h)

all: task1 task2 task3

task1: task1_calc

task2: task2_driver task2_user

task3: task3_driver task3_user

task1_calc: Task-1/task1_calc.o Task-1/task1_calculate.o Task-1/task1_client.o Task-1/task1_server.o
	$(CC) -o $@ -I$(INC) $^

task2_driver: Task-2/task2_driver.o
	$(CC) -o $@ -I$(INC) $^

task2_user: Task-2/task2_user.o
	$(CC) -o $@ -I$(INC) $^

task3_driver: Task-3/task3_driver.o
	$(CC) -o $@ -I$(INC) $^

task3_user: Task-3/task3_user.o Task-3/crypt.o
	$(CC) -o $@ -I$(INC) $^


%.o: %.c $(HDRS)
	$(CC) -c -I$(INC) $< -o $@

%-pa1-cs962.tar.gz:	clean
	tar cf - `find . -type f | grep -v '^\.*$$' | grep -v '/CVS/' | grep -v '/\.svn/' | grep -v '/\.git/' | grep -v '[0-9].*\.tar\.gz' | grep -v '/submit.token$$'` | gzip > $@

.PHONY: prepare-submit
prepare-submit: $(RNO)-pa1-cs962.tar.gz

.PHONY: clean
clean:
	rm -rf  $(obj) task1_calc task2_driver task2_user task3_driver task3_user
