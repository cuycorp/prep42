int ft_strncmp(char *s1, char *s2, unsigned int n){
	int i=0;
	int cmp=0;
	//n could not be specified
	//lower case greater than upper 
	while(i<n && (s1[i]!='\0' || s2[i]!='\0')){
		if(s1[i]==s2[i])
			cmp=0;
		else if(s1[i]<s2[i])
			return -1;
		else
			return 1;	
		i++;	
	}	
	return cmp;

}
