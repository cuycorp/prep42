#include <unistd.h>


void ft_ultimate_ft(int *********nbr);

void prnt(char c){
	write(1,&c,1);
}

int main(void){
	int a=8;
	int *b=&a;//b is pointer a, which is an int
	int **c=&b;
	int ***d=&c;
	int ****e=&d;
	int *****f=&e;
	int ******g=&f;
	int *******h=&g;
	int ********i=&h;

	ft_ultimate_ft(&i);
	if(a==42){
		prnt('o');
		prnt('\n');
	}
	else{
		prnt('F');
	}
}
