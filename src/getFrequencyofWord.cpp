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
		int k = 0, i = 0, j = 0, flag = 0, length = 0, length1 = 0, count = 0, ctr = 0;
		while (str[length] != '\0'){
			length++;
		}
		while (word[length1] != '\0'){
			length1++;
		}
		for (i = 0; i < length; i++)
		{
			k = i;
			flag = 0;
			ctr = 0;
			for (j = 0; j < length1; j++)
			{
				if (word[j] == str[k])
				{
					k++;
					ctr++;
				}
				if (length1 == ctr)
					flag = 1;
			}
			if (flag == 1)
				count++;
		}
	return count;

}
