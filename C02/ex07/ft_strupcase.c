char *ft_strupcase(char *str){
	//Mayu: 65-90
	//Minu: 97-122
	//Minu: 97 = 'a' y 122='z'
	//casos borde; empty, fuera de letras, 
	int i=0;
	while(str[i]){
		//mayu
		if(!str[i]){
			return str;
		}
		if(str[i]>=97&&str[i]<=122){
			str[i]-=32;
		}
		i++;
	}
	return str;	
}
