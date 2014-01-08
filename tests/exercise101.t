#!/usr/bin/perl -w

# Tests for Exercise 1-1 in The C Programming Language (Second Edition).
#
# This file was written by Damien Dart, <damiendart@pobox.com>. This is free
# and unencumbered software released into the public domain. For more
# information, please refer to the accompanying "UNLICENCE" file.

use strict;

use Test::More tests => 2;

open(SOLUTION, "exercise101 |") or BAIL_OUT("Unable to run solution.");
chomp(my $solution_output = join("", <SOLUTION>));
like($solution_output, qr/Hello.*world!/i,
    "Solution output is \"Hello, world!\" or similar.");
is($? >> 8, 0, "Solution exits without errors.");
