#include <stdio.h>
int ft_atoi_base(char *str, char *base);
int ft_todec(char *str, int b);

int main(void){
	//char str[]="    ---+--+010101ab567";
	//char base[]="01";
	//int i=ft_atoi_base(str, base);
	char str[]="011";
	printf("cambio %d\n",ft_todec(str, 2));
}

