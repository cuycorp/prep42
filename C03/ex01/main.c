#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void){
	char s1[]="hello";
	char s2[]="helloG";
	unsigned int n=5;
	int num=ft_strncmp(s1, s2, n);
	printf("%d\n",num);
}

