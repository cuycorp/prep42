char *ft_strcapitalize(char *str){
	int i=0;
	//space
	//
	
	while(str[i]){
		//capitalize first letter
		if(i==0 && str[i]>=97 && str[i]<=122){
			str[i]-=32;
			int e=i;
                        while(str[e+2]!=32&&str[e+2]!='\0'){
                                if(str[e+2]>=65 && str[e+2]<=90){
                                        str[e+2]+=32;
                                }
                                e++;
                        }
                        if(str[e+2]==32){
                                i=e+1;
                        }
                        else{
                                i=e+2;
                        }
		}
		//capitalize first letter of all other words
		if(str[i]==32 && str[i+1]!='\0' && str[i+1]>=97 && str[i+1]<=122){
			str[i+1]-=32;

		}
		
		if(str[i]==32){
			int e=i;
			while(str[e+2]!=32&&str[e+2]!='\0'){
				if(str[e+2]>=65 && str[e+2]<=90){
					str[e+2]+=32;
				}
				e++;
			}
			if(str[e+2]==32){
				i=e+1;
			}
			else{
				i=e+2;
			}
		}
		

		i++;
	}
	return str;
}
