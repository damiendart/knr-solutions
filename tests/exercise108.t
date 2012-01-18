#!/bin/bash

function echoExpectedOutput() {
	echo "Input contains $1 blank(s), $2 tab(s), and $3 newline(s)."
}

function testForEquality() {
  # TODO: Add parameter check.
  local TEST_RESULT="not ok"
  [ "$1" == "$2" ] && TEST_RESULT="ok"
  echo "$TEST_RESULT $3 - $4"
  [ "$1" == "$2" ] || echo "# Test $3 failed: got '$1', expected '$2'."
}

echo "1..7"
testForEquality "$(echo -n | exercise108)" "$(echoExpectedOutput 0 0 0)" \
    1 "Solution handles empty input correctly."
testForEquality "$(echo -n "          " | exercise108)" \
    "$(echoExpectedOutput 10 0 0)" \
    2 "Solution handles just blanks as input correctly."
testForEquality "$(echo -en "\t\t\t\t\t\t\t\t\t\t" | exercise108)" \
    "$(echoExpectedOutput 0 10 0)" \
    3 "Solution handles just tabs as input correctly."
testForEquality "$(echo -en "\n\n\n\n\n\n\n\n\n\n" | exercise108)" \
    "$(echoExpectedOutput 0 0 10)" \
    4 "Solution handles just newlines as input correctly."
testForEquality "$(echo -en "\n\t \n\t\n\t \t\n \n\t" | exercise108)" \
    "$(echoExpectedOutput 3 5 5)" \
    5 "Solution handles a mixture of whitespace as input correctly."
testForEquality "$(echo -en "\naodjasodj\t  \naasdasdas" | exercise108)" \
    "$(echoExpectedOutput 2 1 2)" \
    6 "Solution handles non-whitespace characters correctly."
testForEquality "$?" "0" \
    7 "Solution exits without errors when given input."
