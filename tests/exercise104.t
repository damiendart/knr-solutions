#!/usr/bin/perl -w

# Tests for Exercise 1-4 in The C Programming Language (Second Edition).
#
# This file was written by Damien Dart, <damiendart@pobox.com>. This is free
# and unencumbered software released into the public domain. For more
# information, please refer to the accompanying "UNLICENCE" file.

use strict;

use Test::Differences;
use Test::More tests => 2;

open(SOLUTION, "exercise104 |") or BAIL_OUT("Unable to run solution.");
chomp(my $solution_output = join("", <SOLUTION>));
chomp(my $expected_output = join("", <DATA>));
# The escape sequences need to be interpreted.
$expected_output =~ s/\\([nt])/"qq|\\$1|"/gee;
eq_or_diff($solution_output, $expected_output,
    "Solution output matches expected output.");
is($? >> 8, 0, "Solution exits without errors.");

__END__
C\tF
=============
  0\t 32.0
 20\t 68.0
 40\t104.0
 60\t140.0
 80\t176.0
100\t212.0
120\t248.0
140\t284.0
160\t320.0
180\t356.0
200\t392.0
220\t428.0
240\t464.0
260\t500.0
280\t536.0
300\t572.0
