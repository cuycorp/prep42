#include <unistd.h>
//entry point: starting point of the program
int main(int argc, char*argv[]){
	int i=0;
	while(*argv[0]){
		write(1,argv[0],1);
		argv[0]++;
	}
	write(1,"\n",1);
}
