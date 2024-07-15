char *ft_strcat(char *dest, char *src){
	//como determino tam de algo no null terminated
	//pos nult termiantion
	//append
	char *buff=dest;
	int i=0, e=0;
	while(dest[i]!='\0'){
		i++;
		e++;
	}
	while(src[i-e]!='\0'){
		dest[i]=src[i-e];
		i++;
	}
	dest[i+1]='\0';

	return buff;
	
}

