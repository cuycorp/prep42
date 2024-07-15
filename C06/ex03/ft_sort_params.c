#include <unistd.h>
#include <stdio.h>
//entry point: starting point of the program
void swap(char **str1, char **str2){
	//receives a double pointer, pointer that stores the address to another 	 pointer
	char *temp=*str1;
	//dereference pointer once and we have the value of the addres
	*str1=*str2;
	*str2=temp;
}

int ft_size(char *s){
	int i=0;
	while(s[i]){
		i++;	
	}
	return i;
}

int ft_strcmp(char *s1, char* s2){
	//0 iguales
	int i=0;
	while(s1[i]!='\0' && s2[i]!='\0'){//que pasa en el caso && y prefix 
		if(s1[i]>s2[i])
			return 1;
		if(s1[i]<s2[i])
			return -1;
		i++;
	}
	if(s1[i]<s2[i])
		return -1;
	if(s1[i]>s2[i])
		return 1;
	
	return 0;

}

void prnt(char *argv){
	while(*argv){
		write(1,argv,1);
		argv++;
	}
	write(1,"\n",1);
}


int main(int argc, char*argv[]){
        int i=1;
	int j=i+1;
	//printf("imprime %s\n",argv[1]);
	//printf("imprime %s\n",argv[1]);
	//printf("vivo\n");
	while(i<argc){
		//printf("ordenando\n");
		while(j<argc){
			if(ft_strcmp(argv[i],argv[j])==1){
				swap(&argv[i], &argv[j]);
				//porque doble **
			}
			j++;
		}
		i++;
		j=i+1;
	}
	int p=1;
	
	while(p<argc){
		printf("imprime %s\n",argv[p]);
		//prnt(argv[p]);
		p++;
	}
}
     
