
#include <stdio.h>
int ft_str_is_numeric(char *str);

int main(void){
	char str[]="1234";
	int all;
	all=ft_str_is_numeric(str);
	printf("resultado: %d\n",all);
}



