#!/usr/bin/perl -w
# Tests for Exercise 1-12 in "The C Programming Language (Second Edition)" by
# Brian W Kernighan and Dennis M Ritchie. 

use strict;

use IPC::Open2;
use Test::Differences;
use Test::More tests => 2;

my $process_id = open2(*SOLUTION, *INPUT, "exercise112"); 
my $test_input = "Derp trust fund farm-to-table vegan, biodiesel american " .
    "apparel etsy retro squid cardigan. Squid art party etsy tumblr " .
    "beard bicycle rights.";
print INPUT $test_input;
close INPUT;
chomp(my $solution_output = join("", <SOLUTION>));
my $expected_output = $test_input;
$expected_output =~ s/ /\n/g;
eq_or_diff($solution_output, $expected_output, 
    "Solution outputs test input one word per line.");
# TODO: Test whether words separated by multiple blanks are handled properly.
waitpid($process_id, 0);
is($? >> 8, 0, "Solution exits without errors.");
