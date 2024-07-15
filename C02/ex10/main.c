#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void){
	unsigned int a, size=3; 
	char dest[6];
	char src[]="Ayy!";
	a = ft_strlcpy(dest, src, size);
	printf("size to be %d\n",a);
	printf("dst array %s\n",dest);
	
}
