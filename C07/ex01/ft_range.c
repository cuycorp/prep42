#include <stdlib.h>
#include <stdio.h>
int *ft_range(int min, int max){
	int s=max-min+1;
	int *arri;
	if(s<=1)
		return NULL;
	arri=(int*)malloc(s*sizeof(int));
	
	if (arri == NULL) {
        	printf("Memory allocation failed\n");
        	return NULL;
	}
	int i=-1;
	while(i++<s) {
        	arri[i] =min ;
		min++;
	}	
	return arri;
}
