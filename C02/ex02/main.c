#include <stdio.h>
int ft_str_is_alpha(char *str);

int main(void){
	char str[]="abcdE";
	int a;
	a=ft_str_is_alpha(str);
	printf("rpta: %d\n", a);
}
