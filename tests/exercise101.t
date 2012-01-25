#!/usr/bin/perl -w

use strict;

use Test::More tests => 2;

open(SOLUTION, "exercise101 |") or die;
chomp(my $solution_output = join("", <SOLUTION>));
like($solution_output, qr/Hello.*world!/i,
    "Solution output is \"Hello, world!\" or similar.");
is($? >> 8, 0, "Solution exits without errors.");
