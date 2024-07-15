#include <stdio.h>

int ft_strcmp(char *s1, char* s2);

int main(void){
	char s1[]="helloG", s2[]="hello";
	int a =ft_strcmp(s1,s2);
	printf("resultado: %d\n", a);
}

