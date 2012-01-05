#!/usr/bin/perl -w

use strict;

use Test::More tests => 2;

open(SOLUTION, "exercise101 |") or die;
chomp(my $solution_output = join("", <SOLUTION>));
is($solution_output, "Hello, World!",
    "Solution output is \"Hello, World!\".");
is($?, 0, "Solution exits without errors.");
