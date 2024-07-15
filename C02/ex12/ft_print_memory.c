#include <stdio.h>
#include <unistd.h>

int ft_size(char *addr){
	int i=0;
	while(addr[i]){
		i++;
	}
	return i;
}

void ft_print(char *str){
	int i=0;
	while(str[i]){
		write(1,&str[i],1);
		i++;	
	}
}

void ft_hex(int c){
	char hex[]="0123456789abcdef";
	write(1,&hex[c/16],1);
	write(1,&hex[c%16],1);
}

void pointer_to_hex(char *buffer, void *ptr){
	char hex[]="0123456789abcdef";
	
}



void *ft_print_memory(void *addr, unsigned int size){
	int q=size/16;
	int rem=size%16;	
	int extra=0;
	if(rem>0)
		extra=1;
nt lines=q+extra; 
	int i=0, e=0, j=0, k=0;
	char *char_addr=(char *)addr;
	//char *prnt_memo=*char_addr;
	while(i<lines){//loop de lineas
		//address
		//printf("%p",char_addr+16);
		write(1,char_addr+j,1);
		write(1,":",1);
		write(1," ",2);

		//string 
		if(i<q){ //lineas completas
			while(e<16){
				ft_hex(char_addr[j]);
				ft_hex(char_addr[j+1]);
				write(1,"  ",2);
				e+=2;
				j+=2;
			}
			e=0;
			//impresion 
			while(e<16){
				if(char_addr[k]>=0 && char_addr[k]<=31)
					write(1,".",1);
				else
					write(1,&char_addr[k],1);
				k++;
				e++;
			}

			e=0;	
		}
		
		if(rem>0&&i==q){ //para lineas incompletas
			int ay=rem/2;
			int au=rem%2; 
			while(e<ay){
				ft_hex(char_addr[j]);
                                ft_hex(char_addr[j+1]);
                                write(1,"  ",2);
                                e+=2;
                                j+=2;
			}
			 
			if(au){
				ft_hex(char_addr[j]);
				write(1,"  ",2);
				write(1,"  ",2);
				e+=2;	
			}
			while(e<16){
				write(1,"    ",4);
                                write(1,"  ",2);
                                e+=2;
			}

			e=0;
			while(e<rem){
				if(char_addr[k]>=0 && char_addr[k]<=31)
                                        write(1,".",1);
                                else
                                        write(1,&char_addr[k],1);
                                k++;
				e++;
			}

		}
		//prnt_memo+=16;
		write(1,"\n",1);
		i++;
	}

}
