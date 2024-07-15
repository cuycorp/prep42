#include <unistd.h>

void ft_ultimate_div_mod(int *a, int*b);

void prnt(char c){
	write(1,&c,1);
}
void main(int){
	int a=9,b=2;
	prnt('a');
        prnt('0'+a);
        prnt('\n');
        prnt('b');
        prnt('0'+b);
        prnt('\n');
	prnt('\n');

	ft_ultimate_div_mod(&a, &b);

	prnt('a');
        prnt('0'+a);
        prnt('\n');
        prnt('b');
        prnt('0'+b);
        prnt('\n');

}

