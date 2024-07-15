unsigned int ft_strlcat(char *dest, char *src, unsigned int size){
	
	int i=0, e=0;
	
	while(dest[i]!='\0'){
		i++;
	}
	int h =size-i-1;
	int buff=i+1;
	while(src[e]!='\0'){
		if(h>0)
			dest[i]=src[e];
		e++;
		i++;
		h--;
	}
	dest[i]='\0';
	return buff+e;
}
