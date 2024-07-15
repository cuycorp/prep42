#include <stdio.h>
#include <unistd.h>

void manip(char *strs[]){
	printf("imprime %s\n",strs[0]);
	printf("imprime %s\n",strs[1]);
	printf("imprime %p\n",strs[0]);
	printf("imprime %p\n",strs[1]);
}

int main(void){

    char *strs[] = {
        "Hello, World!",
        "Welcome to C programming",
        "Array of strings"
    };

	manip(strs);

}
