#include <unistd.h>
#include <stdio.h>
char bdec[]="0123456789";                                                      char bhex[]="0123456789ABCDEF";                                                char bbin[]="01";                                                              char bpom[]="poneyvif";

int ft_size(char *str){
	int i=0;
	while(*str){
		str++;
		i++;
	}
	return i;
}

int ft_dup(char *str){
	int i=0,j;
	while(str[i]){
		j=i+1;
		while(str[j]){
			if(str[i]==str[j])
				return 1;
			j++;
		}
		i++;
	}
	return 0;
}

void ft_chbase(int nbr, int base){
	int q=nbr/base;//472
	int r=nbr%base;//10
		char buff[33];
	char *ptr=buff;
	*ptr=bhex[r];
	ptr++;
	while(q>0){           
		r=q%base;
		if(base==2||base==16)
			*ptr=bhex[r]; 
		else
			*ptr=bpom[r];
		q=q/base;
		ptr++;
	}
	*ptr='\0';
	ptr--;
	while(*ptr){
		write(1,ptr,1);
		ptr--;
	}
	write(1,"\n",1);
}

int verbase(char *base){
	//non empty or single
	int i=ft_size(base);
	printf("size %d\n",i);
	int d=ft_dup(base);
	printf("duplicate %d\n",d);
	if(i==0||i==1||d==1){
		printf("vacio o unico\n");
		return 0;
	}
	int j=0;
	int stay=1;
	while(base[j]&&stay){
		if(base[j]!=bhex[j]){
			j=0;
			stay=0;
		}
		else
			j++;
	}
	while(base[j]&&!stay){
                if(base[j]!=bpom[j]){
                        j=0;
                        stay=1;
                }
		else 
                	j++;
        }
	return j;
}
	

void ft_putnbr_base(int nbr, char *base){
	char bdec[]="0123456789";
        char bhex[]="123456789ABCDEF";   
	char bbin[]="01";                                                              char bpom[]="poneyvif";
	int i=verbase(base);
	if(i==2||i==16||i==8)
		if(nbr<0){
			nbr*=-1;
			write(1,"-",1);
		}
		ft_chbase(nbr,i);
}


