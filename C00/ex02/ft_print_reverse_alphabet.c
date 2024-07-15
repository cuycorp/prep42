#include <unistd.h>

void ft_print_reverse_alphabet(void){
        int count_alphabet = 97;
        int end_alphabet = 122;
        while(end_alphabet >96){
                write(1,&end_alphabet,1);
                end_alphabet--;
        }
}

int main(){

        ft_print_reverse_alphabet();
        return 0;

}
