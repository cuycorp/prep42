#include <stdio.h> 
void ft_putstr_non_printable(char *str);

void ft_tohex(int dec, char *hex);

int main(void){
	char str[]="Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
}
