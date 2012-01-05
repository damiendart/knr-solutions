#!/usr/bin/perl -w

use strict;

use Test::Differences;
use Test::More tests => 2;

open(SOLUTION, "exercise104 |") or die;
chomp(my $solution_output = join("", <SOLUTION>));
chomp(my $expected_output = join("", <main::DATA>));
# The escape sequences need to be interpreted.
$expected_output =~ s/\\([nt])/"qq|\\$1|"/gee;
eq_or_diff($solution_output, $expected_output,
    "Solution output matches expected output.");
is($?, 0, "Solution exits without errors.");

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
