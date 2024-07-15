#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);


int main(void){	
	char dest[5]="Hello";
	char src[5]="Hieba";
	int n=3;
	ft_strncpy(dest, src, n);
	printf("source: %s\n",src);
	printf("dest: %s\n",dest);

}
