/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
#include<malloc.h>
char * get_last_word(char * str){
	int length = 0, j = 0, i = 0, count = 0, count1 = 0, count2 = 0, length1 = 0;
	while (str[i] != '\0'){
		length++;
		i++;
	}
	char *str1, temp;
	i = length - 1;
	while (str[i] != '\0'){
		if (str[i] != ' '){
			count1++;
		}
		if (str[i] == ' ')
			break;
		i--;
	}
	str1 = (char *)malloc(count1);
	str1[count1] = '\0';
	count1--;
	for (i = length - 1; i >= 0; i--){
		if (str[i] != ' '){
			str1[count1] = str[i];
			--count1;
		}
		if (str[i] == ' '){
			break;
		}
	}
	return str1;
}