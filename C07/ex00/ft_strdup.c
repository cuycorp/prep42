#include <stdlib.h>
#include <stdio.h>
int ft_size(char *s){
	int i=0;
	while(s[i]){
		i++;
	}
	return i;
}


char *ft_strdup(char *src){
	int s=1+ft_size(src);
	char *ret=(char*)malloc(s*sizeof(char));
	
	if (ret == NULL) {
        	printf("Memory allocation failed\n");
        	return NULL;
	}
	int i=-1;
	while(i++<s) {
        	ret[i] =src[i] ;
	}	
	return ret;
}

