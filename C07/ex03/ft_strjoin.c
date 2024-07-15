#include <stdlib.h>
#include <stdio.h>

int ft_size(char *str){
	int i=0;
	while(*str){
		i++;
		str++;
	}
	return i;
}

char *ft_strjoin(int size, char **strs, char *sep){
	char *ret;
	//edge case
	if (size==0){
		ret=(char*)malloc(sizeof(char));
		ret[0]='\0';
		return ret;
	}
	//character count 
	int len=0;
	int j=0;

	while(j<size){
		len+=ft_size(strs[j]);
		j++;		
	}
	//array filling
	len+=size;//agregando separators
	ret=(char*)malloc(len*sizeof(char));
	
	if(!ret)//equivalencia a NULL
		return NULL;
	int k=0;
	int l=0,m=0;
	while(l<size){
		while(strs[l][m]){
			ret[k++] = strs[l][m];
			//printf("k: %d\n",k);	
			m++;
		}
		m=0;
		if(l!=(size-1))
			ret[k++]=*sep;
		//printf("k: %d\n",k);
		l++;
	}
	ret[k++]='\0';
	return ret;
	//strcpy or manual cpy,atrcat tambien
}
