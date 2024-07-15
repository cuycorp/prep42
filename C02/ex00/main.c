#include <stdio.h>
char *ft_strcpy(char *dest, char *src);

int main(void){
	char src[10]="Hello";
	char dest[10];

	char *p=ft_strcpy(dest, src);
	printf("pointer result: %p\n", &p);
	printf("result: %s\n", p);
	printf("pointer dest: %p\n", &dest);
	printf("value dest: %s\n", dest);
	//include <stdio.h>  library
	//
}
