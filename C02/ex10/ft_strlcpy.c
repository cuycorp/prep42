#include <stdio.h>
unsigned int length(char *dest){
        unsigned int i=0;
        while(dest[i]){
                i++;
        }
        return i+1;
}


unsigned int ft_strlcpy(char *dest, char *src, unsigned int size){
        unsigned int len=length(dest);
        unsigned int lens=length(src);
        unsigned int i=0;

        if(size>len){
                printf("entro llenado dest \n");
		printf("disque lenght dest: %u\n",len); 
		while(i<(len-1)){
                        dest[i]=src[i];
                        i++;
                }
                dest[i]='\0';

        }
        else{
                while(i<(size-1)){
                        dest[i]=src[i];
                        i++;
                }
                dest[i]='\0';
        }

        if(lens<size){
                return size;
        }
        else{
                return lens;
        }

}
