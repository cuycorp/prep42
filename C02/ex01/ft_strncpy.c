#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n){
	int i=0;
	//in C, strings are null-terminated, meaning the end of the string is 
	//indicated by the null character '\0'.
	//In C, the null character has an integer value of 0, which evaluates 
	//to false in a boolean context. Any non-null character (which is any 
	//character except '\0') evaluates to true.
	
	while(src[i]&&(i<n)){
		dest[i]=src[i];
		i++;
	}
	while(i<n){
		dest[i]='\0';
	}
	return dest;


}
