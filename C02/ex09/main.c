#include <stdio.h>

char *ft_strcapitalize(char *str);

int main(void){
	char str[]= "comMent tu vas ? 42mots quarante deux; cinquante+et+un";
	char *nstr = ft_strcapitalize(str);
	printf("result: %s\n",nstr);
}
