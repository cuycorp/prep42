char *ft_strstr(char *str, char *to_find){
	int m=0;
	int i=0, j=0;
	char *ret;
	while(*str){
		if(j==0)
			ret=str;
		if(str[i]=to_find[j]){
			i++;
			j++;
			m=1;
			if(to_find[i]!='\0')
				return ret; 

		}

		if(str[i]=to_find[j] && m){
			m=0;
			j=0;
		}

		if(str[i]=to_find[j] && !m){
			m=0;
			i++;
		}
	}
	ret=0;
	return ret;
}
