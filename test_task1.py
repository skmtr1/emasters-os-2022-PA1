import subprocess
import os

tests = ['test1.csv', 'test2.csv', 'test3.csv']
binary_file = './task1'

for t in range(len(tests)):
    test_file = os.path.join(os.path.join('testcases', 'Task-1'), tests[i])
    if os.path.exists(test_file) is True:
        Pass = True
        contents = None
        with open(test_file, 'r') as f:
            contents = f.readlines()

        task = subprocess.Popen([binary_file],  stdin=subprocess.PIPE, stdout=subprocess.PIPE,stderr=subprocess.PIPE)

        for line in contents:
            line = line.strip()
            parts = line.split(',')
            result = task.communicate(bytes(parts[0].strip(), 'utf-8'))[0].decode("utf-8")
            if parts[0].strip() == 'END':
                break;
            if parts[1].strip() != result.strip().split(': ')[1].strip():
                Pass = False

        task.wait()
        if Pass:
            print("Test case " + int(t+1) + ": passed")
        else:
            print("Test case " + int(t+1) + ": failed")
