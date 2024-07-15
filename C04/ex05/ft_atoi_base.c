char bhex[]="0123456789ABCDEF";
char bpom[]="poneyvif";

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

int ft_pow(int nb, int power){
	//base case power=1
	if(power==0)
		return 1;
	if(power==1)
		return nb;
	return nb*ft_pow(nb,power-1);
}



int ft_todec(char *str, int b){
	int s=ft_size(str)-1;
	int t=0;
	while(*str){
		t+=ft_pow(b,s)*(*str-'0');
		s--;
		str++;	
	}
	return t;
	//incluir caso dec
}


int verbase(char *base){
	//non empty or single
	int i=ft_size(base);
	int d=ft_dup(base);
	if(i==0||i==1||d==1){
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

int ft_atoi_base(char *str, char *base){
	
	//revisar base
	int s=ft_size(base);
        int d=ft_dup(str);
	if(s==0||s==1||d==1)
		return 0;
	int b=verbase(str);
	//revisar str
		int w=0;
		while(*str==' '||*str=='\t'||*str=='\n'||*str=='\v'||*str=='\f'||*str=='\r'){
		str++;
	}
	int sign=1;
	while(*str=='-'||*str=='+'){
		if(*str=='-')
			sign *=-1;
		str++;
	}
	//extraer str
	//while(str*)
	//char s2d[sizeblabla
	//while recorriendo string y comparando exit positivo o return0
	//convertir_ str2int

}
