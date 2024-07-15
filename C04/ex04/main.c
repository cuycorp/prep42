#include <stdio.h>
void ft_putnbr_base(int nbr, char*base);
void ft_chbase(int nbr, int base);
int ft_size(char *str);
int ft_dup(char *str);
int verbase(char *base);

int main(){
	int nbr=7562;
	int n=2;
	char str[18]="01";
	//printf("base %d\n", verbase(str));
	ft_putnbr_base(nbr,str);
}
