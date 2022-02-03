# Programming Assignment 1
## CS962: Operating System Principles, eMasters, 2020, Quarter-I

## Directory Structure
PA1 code base contains 5 directory, Makefile and other supported files required to complete the PA1 and described as follows:

1. The **Task-1** directory contains the template code for the Task-1.

    1.1. Directory contains four C files, namely **task1_calc.c**, **task1_calculate.c**, **task1_client.c**, and **task1_server.c**.

    1.2. **task1_calc.c** contains the main code that you will use for establishing the communication channel between client and server.

    1.3. **task1_client.c** and **task1_server.c** contains the template function to implement the client and server functionality. These template function need to be invoked from the main function available in  **task1_calc.c** file.

    1.4. The **task1_calculate.c** file contains the template function for the calculate function to evaluate the mathematical expression and return the final result. This calculate function is being invoked by the server whenever required.


2. The **Task-2** directory contains the template code for the Task-2

    2.1. Directory contains two C files and two sample chat content files, namely **task2_driver.c**, **task2_user.c**, **chat-1.txt**, and **chat-2.txt**.

    2.2. The **task2_driver.c** and **task2_user.c** files contains the template code for the driver and user program that you need to implement.

    2.3. The **chat-1.txt**, and **chat-2.txt** are the sample **chat content** file that are decribed in the PA1. Use these files to test the functionality of your implementation.


3. The **Task-3** directory contains the template code for the Task-3

    3.1. Directory contains three C files and two sample chat content files, namely **task3_driver.c**, **task3_user.c**, **crypt.c**, **chat-1.txt**, and **chat-2.txt**.

    3.2. The **task3_driver.c** and **task3_user.c** files contains the template code for the driver and user program that you need to implement.

    3.3. The **crypt.c** contains the code for encryption and decryption function which you can directly use to encrypt/decrypt the communication contents.

    3.4. The **chat-1.txt**, and **chat-2.txt** are the sample **chat content** files that are decribed in the PA1. Use these files to test the functionality of your implementation.

4. The **inc** directory contains the standard functions and data structure that can be used in the task given for the PA1.

    4.1. This directory contains two files, namely **calc.h** and **crypt.c**.

    4.2. The **calc.h** file contains the function declaration and constants that are required for Task-1. For example, all the function required to implement client-server based calculator are declared in this file.

    4.3. The **crypt.h** contains the structue of secure key required for the task-3 along the the declaration of encrytion and decryption function.

5. The **sample_output** directory contains store contents for **Task-2** and **Task-3** that a user shoud write message received from other user.

    5.1. This directory contains two sub directories, namely **Task-2** and **Task-3** correspoding to store content of respective chat content provided for each task.

    5.2. Each sub directory contains two file, namel **store-1.txt** and **store-2.txt**.

    5.3. The **store-1.txt** file stores the information that **user-1** has recived from **user-2**. You need to store content in the same format.

    5.4. Similarly, **store-2.txt** stores the information that **user-2** has recived from **user-1**.

    5.5. For **Task-3**, every user should store encrypted as well as decrypted text as shown in the corresponding file.

6. **Makefile** is used for the compilation of the PA1 code base.

7. The **README.md**, this file.


## To Build System
Use **make** command to compile the assignment. After successful compilation, all the binaries are generated in the root directory of the PA1 code base.

1. **Compile code for all the Task:** To compile for all the task, use the **make** command from the root directory of the PA1 code base.
    > **make**

2. **Compile Individual Task code:** Individual task code can be compiled using the **make** command followed by the Task number in lower case. For example, if you want to build the code base for Task-1, the syntax is as follows:
    > **make task1**

    Similarly, other tasks i.e., Task-2, and Task-3 code can be compiled individually.

3. **Clean the build:**
    > **make clean**

## Generated Binary Code
After the compilation of an individual task code or entire assignment code, binary files are placed in the root directory of the PA1 code base. These files are as follows:

1. **Task-1:** Its binary file are represented as **task1_calc**.

2. **Task-2:** Its **driver** and **user** binary files are represented as **task2_driver** and **task2_user**, respectively.

3. **Task-3:** Its **driver** and **user** binary files are represented as **task3_driver** and **task3_user**, respectively.

## Prepare Submission Tar File
To prepare the submission tar file, **make** utility can be utilized for the same. But before preparing it, you need to add the **README.txt** file in the root directory.

The syntax for creating the submission tar file is as follows:
> **make prepare-submit RNO=Your_Roll_Number**
