// Function declaration
#include <unistd.h>


char message[] = "Hello, World!\n";

void ft_putchar(char * c){
	write(1,c,3);
}

int main() {
	int c='a';
	char message[] = "Hello, World!\n";
	ft_putchar(message);
}

