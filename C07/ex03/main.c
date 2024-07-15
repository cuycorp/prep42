#include <stdlib.h>
#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);


int main(void){
	char *strs[]={"Soy","Magnetica","Atraigo"};
	char sep[]="_";
	char *strsconc=ft_strjoin(3,strs,sep);
	printf("%s\n",strsconc);	
}



