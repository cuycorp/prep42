#include <unistd.h>

void ft_print_numbers(void){
	int dig = 49;
	while(dig <= 57){
		write(1,&dig,1);
		dig++;
	
	}
	write(1,"\n",1);
}
		
int main(){
	ft_print_numbers();
	return 0;
}
