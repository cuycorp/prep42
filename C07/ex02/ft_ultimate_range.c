#include <stdlib.h>
#include <stdio.h>
int ft_ultimate_range(int **range, int min, int max){
	//error handling
	if(min>=max){
		*range=NULL;
		return 0;
	}
	//array stocking
	int s=max-min-1;
	*range=(int*)malloc(s*sizeof(int));
	if (*range == NULL) {
        	printf("Memory allocation failed\n");
        	return -1;
	}
	int i = 0;
    	while (i < s) {
        	(*range)[i] = min + i + 1;
        	i++;
    	}	
	return s;//or range a secas?
}


