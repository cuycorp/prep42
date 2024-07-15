#include <unistd.h>

void prnt(char c){
	write(1,&c,1);
}

void ft_swap(int *a, int *b);

int main(void){
	int x=1, y=3;
	prnt('0'+ x);
	prnt('\n');
	prnt('0'+ y);
	prnt('\n');
	ft_swap(&x, &y);
	prnt('0'+ x);
	prnt('\n');
	prnt('0'+ y);
	prnt('\n');
}


