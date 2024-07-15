int ft_size(char *str){
	int i=0;
	while(*str){
		str++;
		i++;
	}
	return i;	
}
int ft_atoi(char *str){
	int size=ft_size(str);
	int i=0;
	int buff[size];
	int sign=1;
	while(!(*str>=48 && *str<=57)){
		if(*str=='-')
			sign *=-1;
		str++;
	}
	while(*str>=48 && *str<=57){
                buff[i]=*str;
		i++;
		str++;        
	}
	int mult=1;
	int j=1;
	while(j<i){
		mult*=10;
		j++;
	}

	int e=0;
	int num=0;
	while(e<i+1){
		num+=(buff[e]-'0')* mult;
		mult/=10;
		e++;
	}
	return num*sign;
}
