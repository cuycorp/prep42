#include <unistd.h>
//entry point: starting point of the program

int main(int argc, char*argv[]){
	int i=0;
	int j=1;
	while(j<argc){
		while(*argv[j]){
			write(1,argv[j],1);
			argv[j]++;
		}
		write(1,"\n",1);
		j++;
	}
}
