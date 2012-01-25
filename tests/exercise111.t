#!/usr/bin/perl -w

use strict;

use Test::More tests => 2;

open(SOLUTION, "exercise111 |");
chomp(my $solution_output = join("", <SOLUTION>));
# FIXME: Worst. Test. Ever.
ok($solution_output, "Solution outputs something.");
is($? >> 8, 0, "Solution exits without errors.");
