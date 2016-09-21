# 42_Piscine-July_2016-Fremont

## Some tips:
### ```ldapsearch``` for people's contact information
```
ldapsearch uid=<uid>
```
Note: assigned e-mails from the 42 domain seem to forward to given/personal e-mail addresses

### Setup zsh aliases
1. vi ~/.zshenv
2. add aliases, save
3. close and restart terminal session

Examples:
```
alias subl="/Applications/Sublime\ Text.app/Contents/SharedSupport/bin/subl"
alias gccc="gcc -Wall -Wextra -Werror"
```
Note: should also probably create aliases for Norminette checking, can also modify terminal prompt

### Adding 42 Headers
1. open your file with vi
2. type ```:Stdheader``` and press enter

## d00

ex01: OK | ex02: OK | ex03: OK | ex04: OK | ex05: OK | ex06: OK | ex07: OK | ex08: OK | ex09: OK | ex10: OK | ex11: OK

## d01

ex01: OK | ex02: OK | ex03: OK | ex04: OK | ex05: OK | ex06: KO | ex07: OK | ex08: OK | ex09: KO

## d02

ex00: Norme error | ex01: Norme error | ex02: Norme error | ex03: Norme error | ex04: Norme error | ex05: Norme error | ex06: Norme error | ex07: Nothing turned in

## d03

ex00: OK | ex01: OK | ex02: OK | ex03: OK | ex04: OK | ex05: Does not compile | ex06: OK | ex07: OK | ex08: KO | ex09: Does not compile

## d04

ex00: KO | ex01: KO | ex02: OK | ex03: OK | ex04: OK | ex05: OK | ex06: KO | ex07: OK | ex08: Norme error | ex09: Nothing turned in

-ex00 fixed, ex01 fixed, ex06 fixed

## d05

ex00: OK | ex01: OK | ex02: OK | ex03: OK | ex04: OK | ex05: KO | ex06: OK | ex07: OK | ex08: OK | ex09: OK | ex10: OK | ex11: OK | ex12: OK | ex13: OK | ex14: OK | ex15: OK | ex16: OK | ex17: Nothing turned in | ex18: Nothing turned in | ex19: Nothing turned in | ex20: Nothing turned in | ex21: Nothing turned in | ex22: Nothing turned in | ex23: Nothing turned in

-ex05 NOT fixed

## d06

ex00: OK | ex01: OK | ex02: OK | ex03: OK | ex04: OK

## d07

ex00: OK | ex01: OK | ex02: OK | ex03: OK | ex04: KO | ex05: OK | ex06: Norme error | ex07: Nothing turned in

## d08

ex00: OK | ex01: OK | ex02: OK | ex03: OK | ex04: OK | ex05: OK | ex06: OK

## d09

ex00: OK | ex01: OK | ex02: KO | ex03: OK | ex04: OK | ex05: Does not compile | ex06: Does not compile | ex07: Does not compile | ex08: KO | ex09: OK | ex10: OK | ex11: OK | ex12: Nothing turned in | ex13: Nothing turned in | ex14: Nothing turned in | ex15: Nothing turned in | ex16: Nothing turned in | ex17: KO | ex18: Nothing turned in | ex19: Nothing turned in | ex20: OK | ex21: Nothing turned in | ex22: OK | ex23: OK

-ex07 fixed

## d10

ex00: OK | ex01: KO | ex02: OK | ex03: OK | ex04: OK | ex05: KO | ex06: OK | ex07: OK | ex08: KO | ex09: KO

-ex01 fixed, ex09 fixed

## d11

ex00: OK | ex01: Segmentation fault | ex02: OK | ex03: OK | ex04: OK | ex05: OK | ex06: Does not compile | ex07: Cheating | ex08: Segmentation fault | ex09: Does not compile | ex10: Nothing turned in | ex11: Nothing turned in | ex12: Nothing turned in | ex13: Nothing turned in | ex14: Nothing turned in | ex15: Nothing turned in | ex16: Nothing turned in | ex17: Nothing turned in

-ex07: forgot to remove debugging (stdio and printf)

## d12

ex00: OK | ex01: Does not compile | ex02: Nothing turned in | ex03: Nothing turned in | ex04: Nothing turned in

## d13

ex00: Does not compile | ex01: OK | ex02: OK | ex03: OK | ex04: OK | ex05: KO | ex06: Nothing turned in | ex07: Nothing turned in | ex08: Nothing turned in | ex09: Nothing turned in

-ex00 fixed by adding prototype to header

## rush00

ex00: OK

-NOTE: ex01_04/ is working code for the other exercises, not my solutions

## rush01

ex00: KO

-doesn't work for multiple solutions, misses one error-checking scenario

## rush02

ex00: KO

-works except forgot to initialize last_col in the *row_col_list function in main.c

## sastantua

ex00: KO

-didn't get a working solution

## match_n_match

ex00: OK | ex01: Nothing turned in

-didn't get a working solution for ex01

## eval_expr

ex00: Nothing turned in

## BSQ

ex00: OK

-perf could definitely be improved, should probably only use a linked-list for reading first line, then create 2D array for further storage
