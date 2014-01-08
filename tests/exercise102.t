#!/usr/bin/perl -w

# Tests for Exercise 1-2 in The C Programming Language (Second Edition).
#
# This file was written by Damien Dart, <damiendart@pobox.com>. This is free
# and unencumbered software released into the public domain. For more
# information, please refer to the accompanying "UNLICENCE" file.

use strict;

use Test::More tests => 5;

open(SOLUTION, "exercise102 |") or BAIL_OUT("Unable to run solution.");
chomp(my $solution_output = join("", <SOLUTION>));
# TODO: Check for all escape sequences.
like($solution_output, qr/\a/, "Solution output contains \"\\a\".");
like($solution_output, qr/\f/, "Solution output contains \"\\f\".");
like($solution_output, qr/\r/, "Solution output contains \"\\r\".");
like($solution_output, qr/\v/, "Solution output contains \"\\v\".");
is($? >> 8, 0, "Solution exits without errors.");
