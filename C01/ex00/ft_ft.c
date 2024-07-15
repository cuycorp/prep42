#include <unistd.h>


void prnt(char c){
	write(1,&c,1);
}

	
void ft_ft(int *nbr){
	*nbr = 42;
}


int main(void){
	int a=8;
	prnt('0'+a);
	ft_ft(&a);
	prnt('0'+a);
	prnt('\n');
}
