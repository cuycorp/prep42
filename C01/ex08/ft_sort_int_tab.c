#include <unistd.h>

void bubblesort(int *tab, int size){
	int i=0, tmp;
	int e=0;
	while(e<(size-1)){
		while(i<(size-1)){
			if(tab[i+1]<tab[i]){
				tmp=tab[i];
				tab[i]= tab[i+1];
				tab[i+1]=tmp;
			}
		i++;	
		}
	i=0;
	e++;
	}
}


void selectionsort(int *tab, int size){
	half=size/2;
half=size/2;

}

void prnt(char c){
	write(1,&c,1);
}

