#! /bin/sh

res_dir="exe_result/result"
exe_output="exe_result/Task-3"
test_dir="testcases/Task-3"
mkdir -p $exe_output
mkdir -p $res_dir
result="$res_dir/task3_result.txt"
> $result
test(){
  test_out=$exe_output/t$1
  testCaseDir=$test_dir/t$1
  mkdir -p $test_out
  testNo=$1
  chat1=$testCaseDir/$2
  store1=$test_out/$3
  chat2=$testCaseDir/$4
  store2=$test_out/$5
  act_store1=$testCaseDir/$6
  act_store2=$testCaseDir/$7

  ./task3_user $chat1 $store1 $chat2 $store2
  echo "task executed"
  res1=`diff $store1 $act_store1 | wc -l`
  res2=`diff $store2 $act_store2 | wc -l`
  if [ $res1 -eq 0 ] && [ $res2 -eq 0 ]
  then
  	echo "TESTCASE-$testNo PASSED" >> $result
  else
  	echo "TESTCASE-$testNo FAILED" >> $result
  fi
}


test 1 chat-1.txt store-1.txt chat-2.txt store-2.txt store-1.txt store-2.txt
test 2 chat-1.txt store-1.txt chat-2.txt store-2.txt store-1.txt store-2.txt
test 3 chat-1.txt store-1.txt chat-2.txt store-2.txt store-1.txt store-2.txt
