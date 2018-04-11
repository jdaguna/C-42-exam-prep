# C-42-exam-prep

## alpha_mirror.c
Takes a string and displays the string after replacing each alphabetical character by the opposite alphabetical character, followed by a newline.
'a' becomes 'z', 'Z' becomes 'A'
'd' becomes 'w', 'M' becomes 'N'
Case is not changed.

## do_op.c
Write a program that takes three strings:
- The first and the third one are representations of base-10 signed
integers that fit in an int.
- The second one is an arithmetic operator chosen from: + - * / %
The program displays the result of the requested arithmetic
operation, followed by a newline. If the number of parameters is not 3, the
program just displays a newline.
You can assume the string have no mistakes or extraneous characters.
Negative numbers, in input or output, will have one and only one leading '-'.
The result of the operation fits in an int.

## first_word.c
Write a program that takes a string and displays its first word, followed by a newline.
A word is a section of string delimited by spaces/tabs or by the start/end of the string.

## ft_atoi.c
Write a program that takes three strings:
- The first and the third one are representations of base-10 signed
integers that fit in an int.
- The second one is an arithmetic operator chosen from: + - * / %
The program must display the result of the requested arithmetic
operation, followed by a newline. If the number of parameters is not 3, the
program just displays a newline.
You can assume the string have no mistakes or extraneous characters.
Negative numbers, in input or output, will have one and only one leading '-'.
The result of the operation fits in an int.

## ft_countdown.c
Write a program that displays all digits in descending order, followed
by a newline.

## ft_ctrcpy.c
Reproduce the behavior of the function strcpy (man strcpy).

## ft_print_numbers.c
Write a function that displays all digits in ascending order. 

## ft_putstr.c
Write a function that displays a string on the standard output.
The pointer passed to the function contains the address of the
string's first character.

## ft_strcmp.c
Reproduce the behavior of the function strcmp (man strcmp).

## ft_strdup.c
Reproduce the behavior of the function strdup (man strdup).

## ft_strlen.c
Write a function that returns the length of a string. 

## ft_sttrev.c
Write a function that reverses (in-place) a string.
It must return its parameter.

## ft_swap.c
Write a function that swaps the contents of two integers the adresses
of which are passed as parameters.

## hello.c
Write a program that displays "Hello World!" followed by a \n.

## inter.c
Write a program that takes two strings and displays, without doubles,
the characters that appear in both strings, in the order they appear in the first one. The display will be followed by a \n.
If the number of arguments is not 2, the program displays \n.

## max.c
The first parameter is an array of int, the second is the number of
elements in the array.
The function returns the largest number found in the array.
If the array is empty, the function returns 0.

## nospace.c
Removes all spaces in a given parameter and displays the result.

## print_bits.c
Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE AT THE END.
Your function must be declared as follows: 
repeat_alpha.c
Write a program called repeat_alpha that takes a string and display it repeating each alphabetical character as many times as its alphabetical index, followed by a newline.
'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...
Case remains unchanged.
If the number of arguments is not 1, just display a newline.

## rev_print.c
Write a program that takes a string, and displays the string in reverse followed by a newline.
If the number of parameters is not 1, the program displays a newline.

## rot_13.c
Write a program that takes a string and displays it, replacing each of its letters by the letter 13 spaces ahead in alphabetical order.
'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.
The output will be followed by a newline.
If the number of arguments is not 1, the program displays a newline.

## rotone.c
Write a program that takes a string and displays it, replacing each of its
letters by the next one in alphabetical order.
'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.
The output will be followed by a \n.
If the number of arguments is not 1, the program displays \n.

## search_and_replace.c
Write a program called search_and_replace that takes 3 arguments, the first arguments is a string in which to replace a letter (2nd argument) by another one (3rd argument).
If the number of arguments is not 3, just display a newline.
If the second argument is not contained in the first one (the string) then the program simply rewrites the string followed by a newline.

## union.c
Write a program that takes two strings and displays, without doubles, the characters that appear in either one of the strings.
The display will be in the order characters appear in the command line, and will be followed by a \n.
If the number of arguments is not 2, the program displays \n.

## wdmatch.c
Write a program that takes two strings and checks whether it’s possible to write the first string with characters from the second string, while
respecting the order in which these characters appear in the second string.
If it's possible, the program displays the string, followed by a \n, otherwise it simply displays a \n. If the number of arguments is not 2, the program displays a \n.
