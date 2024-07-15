#include <unistd.h>

int ft_strlen(char *str){
	int i=0;
        while (str[i] != '\0'){
        	i++;
        }
	return i;
}                                                      

void prnt(char c){
	write(1,&c,1);
}
