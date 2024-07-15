#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int main(void){
	int *range;
	int min=3; 
	int max=5;
	int size=ft_ultimate_range(&range,min,max);
	
	if (range!=NULL){
		int *temp=range;
		while(*temp){
			printf("%d ", *temp);
			temp++;
		}
		printf("\n"); 
		free(range);//free the allocated memory
		range=NULL;//avoid dangling pointer
	}

}
