#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void){
	char dest[6]="ai";
	char src[]="hello";
	unsigned int i=ft_strlcat(dest, src, 6);
	printf("resultado %s\n y characteres necesarios %d\n",dest, i);
}

