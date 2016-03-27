/*
OVERVIEW: Given a string, Return the substring of the main string from i index to j index
Indexes start from 0,ith letter and jth letter are included
E.g.: Input: "get_sub_string("abcdefgh",2,5) , Output: "cdef"

INPUTS: A string.

OUTPUT: return substring from [i,j]

INPUT2: I will Code for Mission RnD , 2,10
OUTPUT2:will Code

NOTES: Check Null Strings ,Include stddef for NULL if needed.Create a New string and return it ,dont modfiy
original String
*/

#include <stddef.h>
#include <stdlib.h>
#include<malloc.h>

char * get_sub_string(char *str, int i, int j){
	if (str == NULL)
		return NULL;
	char *str1;
	int k = 0;
	int p = 0, length = 0;
	while (str[p] != '\0'){
		length++;
		p++;
	}
	if (i > length || j > length)
		return NULL;
	p = 0; k = i;
	if (i <= j){
		str1 = (char *)malloc((j - i) + 1 * sizeof(char));
		while (str[i] != '\0'){
			str1[p] = str[i];
			p++;
			if (i == j)
				break;
			i++;
		}
		str1[(j - k) + 1] = '\0';
		return str1;
	}
	else if(k>j){
		return NULL;
	}
}


