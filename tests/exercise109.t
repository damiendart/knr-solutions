#!/bin/bash

# Tests for Exercise 1-9 in The C Programming Language (Second Edition).
#
# This file was written by Damien Dart <damiendart@pobox.com>. This is free
# and unencumbered software released into the public domain. For more
# information, please refer to the accompanying "UNLICENCE" file.

function testForEquality() {
  # TODO: Add parameter check.
  local TEST_RESULT="not ok"
  [ "$1" == "$2" ] && TEST_RESULT="ok"
  echo "$TEST_RESULT $3 - $4"
  [ "$1" == "$2" ] || echo "# Test $3 failed: got '$1', expected '$2'."
}

echo "1..5"
testForEquality "$(echo -n "aaaa aaaaaa aaaaaaaa" | exercise109)" \
    "aaaa aaaaaa aaaaaaaa" \
    1 "Solution handles input with single spaces correctly."
testForEquality "$(echo -n "aaaa    aaaaaa        aaaaaaaa" | exercise109)" \
    "aaaa aaaaaa aaaaaaaa" \
    2 "Solution handles input with sequences of blanks correctly."
testForEquality "$(echo -n "aaaaaaaaaaaaaaaaaa" | exercise109)" \
    "aaaaaaaaaaaaaaaaaa" \
    3 "Solution handles input with no blanks correctly."
testForEquality "$(echo "aa\taa aaa\naaa\t aaaaaaaa" | exercise109)" \
    "aa\taa aaa\naaa\t aaaaaaaa" \
    4 "Solution handles input with blanks, newlines, and tabs correctly."
testForEquality "$?" "0" \
    5 "Solution exits without errors when given input."
