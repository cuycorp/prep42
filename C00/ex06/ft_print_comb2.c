#include <unistd.h>

void ft_print_comb2(void){
	int a0='0', a1='0';
	int b0,b1;
	while(a0<='9'){
		while(a1<='9'){
			b0=a0;
			b1=a1+1;
			while(b0<='9' && !(b0=='9'&& b1=='9')){
				while(b1<='9'){
					write(1,&a0,1);
                        		write(1,&a1,1);
                        		write(1," ", 1);
					write(1,&b0,1);
                        		write(1,&b1,1);
					write(1,",", 1);
                        		write(1," ", 1);
                       			b1++;
				}
				b1=0;
				b0++;
			}
			a1++;		
		}

		a1='0';
		a0++;	
	}
}


int main(){
	ft_print_comb2();
	write(1,"\n",1);
}


