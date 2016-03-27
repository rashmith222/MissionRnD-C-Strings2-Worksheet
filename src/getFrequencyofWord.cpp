/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word){
	int i = 0, j = 0,flag=0, length = 0, length1 = 0, count = 0;
	while (str[length] != '\0'){
		length++;
	}
	while (word[length1] != '\0'){
		length1++;
	}
	while (i < length){
		j = 0;
		while (word[j]==str[i]){
			j++;
			i++;
			flag = 1;
			if (j == length1)
				break;
		}
		if (flag==1)
		count++;
		i++;
	}
	return count;
}


