#include <unistd.h>
void prnt(char c){
	write(1,&c,1);
}

void ft_putstr(char *str){
	//longitud de str 
	//for loop con write por toda la longitud str 
	int i=0;
	while (str[i] != '\0'){
		prnt(str[i]);
		i++;
	}

}
