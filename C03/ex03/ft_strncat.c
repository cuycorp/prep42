char *ft_strncat(char *dest, char *src, unsigned int nb){
	char *buff=dest;
	int i=0, e=0;
	while(dest[i]!='\0'){
		i++;
		e++;
	}
	while(src[i-e]!='\0' && ((i-e)<nb)){
		dest[i]=src[i-e];
		i++;
	}
	dest[i+1]='\0';

		return buff;
	
}
