#include <unistd.h>

void ft_print_reverse_alphabet(void){
	int count_alphabet = 97;
	int end_alphabet = 122;
	while(count_alphabet <123){
		write(1,&count_alphabet,1);
		count_alphabet++;
	}
}

int main(){

	ft_print_reverse_alphabet();
	return 0;

}
