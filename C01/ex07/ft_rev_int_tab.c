#include <unistd.h>

void ft_rev_int_tab(int *tab, int size){
	int nums[size];
	int i=size-1;
	int io=0;
	while(io<size){
		nums[io]=tab[i];
		io++;
		i--;
	}
	int iif=0;
	while(iif<size){
		tab[iif]=nums[iif];
	iif++;
	}
}

void prnt(char c){
	write(1,&c,1);
}


int ft_strlen(int *str){
	int i=0;
        while (str[i]){
        	i++;
        }
	return i;
}   

