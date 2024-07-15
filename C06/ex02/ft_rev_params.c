#include <unistd.h>
//entry point: starting point of the program

int main(int argc, char*argv[]){
        int j=argc-1;
        while(j>0){
                while(*argv[j]){
                        write(1,argv[j],1);
                        argv[j]++;
                }
                write(1,"\n",1);
                j--;
        }
} 
