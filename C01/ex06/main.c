int ft_strlen(char *str);
void prnt(char c);

int main(void){
	char str[] = "Hello";
	int a; 
	a=ft_strlen(str);	
	prnt('0'+a);
	prnt('\n');
}

