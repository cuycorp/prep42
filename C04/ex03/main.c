#include <stdio.h>

int ft_atoi(char *str);

int main(int argcount, char *argvalues[]){
	if (argcount != 2) {
        	printf("Usage: %s <string>\n", argvalues[0]);
        	return 1;
    	}
	char *str=argvalues[1];
	int i= ft_atoi(str);
	printf("resultado: %d\n",i);
	return 0;
}

