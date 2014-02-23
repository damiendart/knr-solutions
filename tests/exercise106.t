#!/usr/bin/perl -w

# Tests for Exercise 1-6 in The C Programming Language (Second Edition).
#
# This file was written by Damien Dart, <damiendart@pobox.com>. This is free
# and unencumbered software released into the public domain. For more
# information, please refer to the accompanying "UNLICENCE" file.

use strict;

use IPC::Open2;
use Test::More tests => 4;

my $process_id;
eval { $process_id = open2(*SOLUTION, *INPUT, "exercise106"); };
BAIL_OUT("Unable to run solution \"exercise106\".") if ($@ =~ /^open2:/);
close INPUT;
chomp(my $solution_output = join("", <SOLUTION>));
is($solution_output, 0, "Solution output is \"0\" when input is EOF.");
waitpid($process_id, 0);
is($? >> 8, 0, "Solution exits without errors when input is EOF.");
eval { $process_id = open2(*SOLUTION, *INPUT, "exercise106"); };
BAIL_OUT("Unable to run solution \"exercise106\".") if ($@ =~ /^open2:/);
print INPUT "a";
close INPUT;
chomp($solution_output = join("", <SOLUTION>));
is($solution_output, 1, "Solution output is \"1\" when input is not EOF.");
waitpid($process_id, 0);
is($? >> 8, 0, "Solution exits without errors when input is not EOF.");
