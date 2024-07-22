#!/usr/bin/perluse warnings;
use strict;die "program x y density" unless (scalar(@ARGV) == 3);my ($x, $y, $density) = @ARGV;open(my $fh, '>', 'grid.txt') or die "Fail to create";print $fh "$y.ox\n";
for (my $i = 0; $i < $y; $i++) {
	for (my $j = 0; $j < $x; $j++) {
		if (int(rand($y) * 2) < $density) {
			print $fh "o";
		}
		else {
			print $fh ".";
		}
	}
	print $fh "\n";
}close($fh);print "Succes\n";