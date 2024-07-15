#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src);

int main(void){
	char src[]="dancing";
	char *ay=ft_strdup(src);
	printf("original %s y copiado %s\n",src,ay);
	free(ay);	
}

