#include <stdio.h>

char *ft_strupcase(char *str);

int main(void){	
	char str[]="asSSD";
	char *nstr=ft_strupcase(str);
	printf("new: %s\n", nstr);
}

