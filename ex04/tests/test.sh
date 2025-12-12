#!/bin/bash

BIN=./sed_is_for_losers 
TEST_DIR=tests
TEST_FILE=$TEST_DIR/files/test

printf -- "test file\n"
cat $TEST_FILE

printf -- "----------------------------------------\n"
echo no arg 
printf -- "------------------------------\n"
$BIN $TEST_FILE && cat $TEST_FILE.replace

printf -- "----------------------------------------\n"
echo too many args 
printf -- "------------------------------\n"
$BIN $TEST_FILE abc abc abc && cat $TEST_FILE.replace
printf -- "----------------------------------------\n"

echo abc 123 
printf -- "------------------------------\n"
$BIN $TEST_FILE abc 123 && cat $TEST_FILE.replace
printf -- "----------------------------------------\n"

echo 123 abc 
printf -- "------------------------------\n"
$BIN $TEST_FILE 123 abc && cat $TEST_FILE.replace
printf -- "----------------------------------------\n"

echo '0
123' hoge 
printf -- "------------------------------\n"
$BIN $TEST_FILE '0
abc' hoge && cat $TEST_FILE.replace
printf -- "----------------------------------------\n"

echo \"\" hoge 
printf -- "------------------------------\n"
$BIN $TEST_FILE "" hoge && cat $TEST_FILE.replace
printf -- "----------------------------------------\n"

echo abc \"\"
printf -- "------------------------------\n"
$BIN $TEST_FILE abc "" && cat $TEST_FILE.replace
printf -- "----------------------------------------\n"
