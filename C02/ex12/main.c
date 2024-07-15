#include <stdio.h>

void *ft_print_memory(void *addr, unsigned int size);
int ft_size(char *addr);

int main(void){
	char addr[]="Up am intention on dependent questions oh elsewhere september";	
	unsigned  int size=ft_size(addr);
	ft_print_memory(addr,size);
	
}

