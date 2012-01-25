#!/usr/bin/perl -w

use strict;

use Test::More tests => 2;

open(SOLUTION, "exercise107 |") or die;
chomp(my $solution_output = join("", <SOLUTION>));
like($solution_output, qr/EOF = -?[0-9]+/i,
    "Solution output is \"EOF = X\" where X is an integer.");
is($? >> 8, 0, "Solution exits without errors.");
