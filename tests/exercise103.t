#!/usr/bin/perl -w

# Tests for Exercise 1-3 in The C Programming Language (Second Edition).
#
# This file was written by Damien Dart, <damiendart@pobox.com>. This is free
# and unencumbered software released into the public domain. For more
# information, please refer to the accompanying "UNLICENCE" file.

use strict;

use Test::Differences;
use Test::More tests => 2;

open(SOLUTION, "exercise103 |") or BAIL_OUT("Unable to run solution.");
chomp(my $solution_output = join("", <SOLUTION>));
chomp(my $expected_output = join("", <DATA>));
# The escape sequences need to be interpreted.
$expected_output =~ s/\\([nt])/"qq|\\$1|"/gee;
eq_or_diff($solution_output, $expected_output,
    "Solution output matches expected output.");
is($? >> 8, 0, "Solution exits without errors.");

__END__
F\tC
=============
  0\t-17.8
 20\t -6.7
 40\t  4.4
 60\t 15.6
 80\t 26.7
100\t 37.8
120\t 48.9
140\t 60.0
160\t 71.1
180\t 82.2
200\t 93.3
220\t104.4
240\t115.6
260\t126.7
280\t137.8
300\t148.9
