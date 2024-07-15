#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max);

int main(void){
	int min=2;
	int max=3;
	int *ii=ft_range(min,max);
	if (ii!=NULL){
		for(int i = 0; i < (max-min+1); i++) {
        		printf("%d ", ii[i]);
		}
		free(ii);//free the allocated memory
		ii=NULL;//avoid dangling pointer
	}

}
