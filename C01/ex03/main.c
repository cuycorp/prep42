#include <unistd.h>


void prnt(char c){
	write(1,&c,1);
}

void ft_div_mod(int a, int b, int *div, int *mod);


void main(int){
	int div=2, divd=9;
	int resm, resd;
	ft_div_mod(divd, div, &resd, &resm);
	prnt('0'+resd);
	prnt('\n');
	prnt('0'+resm);
	prnt('\n');
}
