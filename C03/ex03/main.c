#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void){
	char src[]="hello";
	char dest[10]="ai";
	int nb=2;
	char *a= ft_strncat(dest, src, nb);
	printf("resultado %s\n",dest);
}
