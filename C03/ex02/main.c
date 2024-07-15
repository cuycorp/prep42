#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int main(void){
	char src[]="hello";
	char dest[8]="ai";
	char *buff=ft_strcat(dest, src);
	printf("resultad0: %s\n",dest);
}
