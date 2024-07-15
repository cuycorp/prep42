#include <stdio.h>
#include <unistd.h>

char *ft_strstr(char *str, char *to_find);

int main(void){
	char str[]="HMmmast";
	char to_find[]="HMm";
	char *a=ft_strstr(str, to_find);
	write(1,a,1);
	write(1,"\n",1);
}
