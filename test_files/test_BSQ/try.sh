echo TEST CASES
echo 30 40
perl generator.pl 30 40 2 | ./bsq
echo
echo 40 30
perl generator.pl 40 30 2 | ./bsq
echo
echo
perl generator.pl 300 400 2 | ./bsq
echo
echo
perl generator.pl 400 300 2 | ./bsq
echo
echo
perl generator.pl 500 500 2 | ./bsq
echo
echo 
perl generator.pl 1000 1000 2 | ./bsq
echo
echo
perl generator.pl 100 100 2 | ./bsq
echo
echo 
echo
echo 1 1 1
perl generator.pl 1 1 1 | ./bsq
echo
echo 1 10 1 
perl generator.pl 1 10 1 | ./bsq
echo
echo 10 1 1
perl generator.pl 10 1 1 | ./bsq
echo
echo
echo FILES
echo
echo 100 10 1000000
./bsq obstacle_map
echo
echo
echo 100 10 0
./bsq empty_map
echo
echo
echo nums as chars
./bsq num_chars
echo
echo MULTIPLE FILES
echo nums as chars
./bsq num_chars empty_map obstacle_map
echo 
echo
./bsq num_chars invalid_first_line empty_map
echo
echo
./bsq invalid_first_line num_chars
echo SHOULD OUTPUT map error:
echo
echo
echo 0 2 1
perl generator.pl 0 2 2 | ./bsq
echo
echo
echo
echo 2 0 1
perl generator.pl 2 0 2 | ./bsq
echo
echo
echo
echo 0 0 1
perl generator.pl 2 0 2 | ./bsq
echo
echo
echo
echo invalid first line
./bsq invalid_first_line
echo
echo
echo
echo new line filee 
./bsq test10
echo
echo
echo
echo does not exist 
./bsq testfiledoesnotexist,asfarasiknow,imeanlasttimeichecked.
