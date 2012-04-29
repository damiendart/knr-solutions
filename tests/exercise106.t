#!/bin/bash

# Tests for Exercise 1-6 in The C Programming Language (Second Edition).
#
# This file was written by Damien Dart, <damiendart@pobox.com>. This is free
# and unencumbered software released into the public domain. For more
# information, please refer to the accompanying "UNLICENCE" file.

function testForEquality() {
  # TODO: Add parameter check.
  local TEST_RESULT="not ok"
  [ "$1" == "$2" ] && TEST_RESULT="ok"
  echo "$TEST_RESULT $3 - $4"
  [ "$1" == "$2" ] || echo "# Test $3 failed: got '$1', expected '$2'."
}

echo "1..4"
testForEquality "$(echo -n | exercise106)" "0" \
    1 "Solution output is \"0\" when input is EOF."
echo -n | exercise106 >/dev/null
testForEquality "$?" "0" \
    2 "Solution exits without errors when input is EOF."
testForEquality "$(echo -n \"a\" | exercise106)" "1" \
    3 "Solution output is \"1\" when input is not EOF."
echo -n "a" | exercise106 >/dev/null
testForEquality "$?" "0" \
    4 "Solution exits without errors when input is not EOF."
