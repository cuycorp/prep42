int ft_size(char *s){
	int i=0;
	while(s[i]){
		i++;	
	}
	return i;
}

int ft_strcmp(char *s1, char* s2){
	//0 iguales
	int i=0;
	int ss1=ft_size(s1);
	int ss2=ft_size(s2);
	while(s1[i]!='\0' && s2[i]!='\0'){//que pasa en el caso && y prefix 
		if(s1[i]>s2[i])
			return 1;
		if(s1[i]<s2[i])
			return -1;
		i++;
	}
	if(s1[i]<s2[i])
		return -1;
	if(s1[i]>s2[i])
		return 1;
	
	return 0;

}
