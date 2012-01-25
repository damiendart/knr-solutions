#!/usr/bin/perl -w

use strict;

use Test::More tests => 5;

open(SOLUTION, "exercise102 |") or die;
chomp(my $solution_output = join("", <SOLUTION>));
# TODO: Check for all escape sequences.
like($solution_output, qr/\a/, "Solution output contains \"\\a\".");
like($solution_output, qr/\f/, "Solution output contains \"\\f\".");
like($solution_output, qr/\r/, "Solution output contains \"\\r\".");
like($solution_output, qr/\v/, "Solution output contains \"\\v\".");
is($? >> 8, 0, "Solution exits without errors.");
