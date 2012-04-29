#!/bin/bash

# Tests for Exercise 1-10 in The C Programming Language (Second Edition).
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

echo "1..6"
testForEquality "$(echo -e "\t\taaaaa\t\taaaa" | exercise110)" \
    "\t\taaaaa\t\taaaa" 1 "Solution handles input with tabs correctly."
testForEquality "$(echo -e "aaaaa\b\baaaa" | exercise110)" \
    "aaaaa\b\baaaa" 2 "Solution handles input with backspaces correctly."
testForEquality "$(echo "\aaaaa\aaaa" | exercise110)" \
    "\\\\aaaaa\\\\aaaa" 3 "Solution handles input with backslashes correctly."
testForEquality "$(echo -e "\t\baaaa\\\taaaa" | exercise110)" \
    "\t\baaaa\\\taaaa" \
    4 "Solution handles input with tabs, backspaces, and backslashes."
testForEquality "$(echo -n "" | exercise110)" "" \
    5 "Solution handles empty input correctly."
testForEquality "$?" "0" \
    6 "Solution exits without errors when given input."
