#!/bin/sh
norminette -R CheckForbiddenSourceHeaders rush-02.c
norminette -R CheckForbiddenSourceHeaders utils.c

make
#gcc -Wall -Wextra -Werror rush-02.c utils.c -o rush-02
echo TEST 1 - No arguments - Expected "Error\n"
echo ./rush-02
./rush-02
echo
echo TEST 2 - One argument - a number
echo rush-02 7 	Expected "seven"
./rush-02 7 	
echo rush-02 74  Expected "seventy four"
./rush-02 64  
echo rush-02 950 Expected "nine hundred and fifty"
./rush-02 950 
echo rush-02 1002 Expected "a thousand and two"
./rush-02 1002 
echo rush-02	5037 Expected "five thousand and thirty seven"
./rush-02	5037
echo rush-02 10678 Expected "ten thousand six hundred and seventy eight"
./rush-02 10678 
echo rush-02 20987654321457322 Expected "two undecillion nine nonillion eight octillion seven septillion siz sextillion
 five quintillion four quadrillion three trillion two billion one million four hundred fifty seven thousand three hundred and twenty two"
./rush-02 2098765432145732
echo
echo TEST 3  One arguments- invalid type of data
echo rush-02 "badtest.dic"  expected "Error"
./rush-02 "badtest.dic"
echo
echo TEST 4  Two arguments- file does not exist Expected Error
echo rush-02 "bad.dic" 4567 
./rush-02 "bad.dic" 4567 
echo
echo TEST 5  Two arguments- valid empty filename
echo ./rush-02 "notest.dic" 42
./rush-02 "notest.dic" 42
echo
echo Tests 6  Two arguments- both valid, single word numbers
echo thousand has become hello and three has become world
./rush-02 "test.dic" 42
echo rush-02 7 	Expected "seven"
./rush-02 "test.dic" 7 	
echo rush-02 74  Expected "seventy four"
./rush-02 "test.dic" 64  
echo rush-02 950 Expected "nine hundred and fifty"
./rush-02 "test.dic" 950 
echo rush-02 1002 Expected "a hello and two"
./rush-02 "test.dic" 1002 
echo rush-02	5037 Expected "five hello and thirty seven"
./rush-02	"test.dic" 5037
echo rush-02 10678 Expected "ten hello six hundred and seventy eight"
./rush-02 "test.dic" 10678 
echo rush-02 "test.dic" 20987654321457322 Expected "two undecillion nine nonillion eight octillion seven septillion siz sextillion
 five quintillion four quadrillion three trillion two billion one million four hundred fifty seven thousand three hundred and twenty world"
./rush-02 2098765432145733
echo
echo Tests 7  Two arguments- both valid, multiple word numbers
echo thousand has become hello world and three has become goodbye world
./rush-02 "mtest.dic" 42
echo rush-02 7 	Expected "seven"
./rush-02 "mtest.dic" 7 	
echo rush-02 74  Expected "seventy four"
./rush-02 "mtest.dic" 64  
echo rush-02 950 Expected "nine hundred and fifty"
./rush-02 "mtest.dic" 950 
echo rush-02 1002 Expected "a hello world and two"
./rush-02 "mtest.dic" 1002 
echo rush-02	5037 Expected "five hello hello and thirty seven"
./rush-02	"mtest.dic" 5037
echo rush-02 10678 Expected "ten hello world six hundred and seventy eight"
./rush-02 "mtest.dic" 10678 
echo rush-02 "mtest.dic" 20987654321457322 Expected "two undecillion nine nonillion eight octillion seven septillion siz sextillion
 five quintillion four quadrillion three trillion two billion one million four hundred fifty seven thousand three hundred and twenty goodbye world"
./rush-02 2098765432145733



