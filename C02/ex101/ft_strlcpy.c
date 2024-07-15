unsigned int ft_len(char *src){
	unsigned int i=0;
	while(src[i])
		i++;
	return i;
}
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size){
	unsigned int len=ft_len(src);
	int i=0;
	if(size)
		while(i<size-1&&len){
			dest[i]=src[i];
			i++;
		}
		dest[i]='\0';
	return len;
}	
