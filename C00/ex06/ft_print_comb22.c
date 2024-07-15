#include <unistd.h>

void prnt(char c){
	write(1,&c,1);
}

void ft_print_comb2(void){
	int a0='0', a1='0';
	int b0,b1;
	while(a0<='9'){
		while(a1<='9'){
			if(!(a0=='9'&& a1=='9')){
				b0=a0;
				b1=a1+1;
				while(b0<='9'){
					while(b1<='9'){			
						prnt(a0);                                                                      prnt(a1);                                                                      prnt(' ');

						prnt(b0); 
						prnt(b1);
						if(!(b0=='9'&& b1=='9'&&a0=='9'&&a1=='8')){
							prnt(',');
							prnt(' ');
						}

						b1++;
					}
					b1='0';
					b0++;
				}
				

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


