void ft_sort_int_tab(int *tab, int size);
void prnt(char c);
void bubblesort(int *tab, int size);

int main(void){
	int tab[5]={7,5,4,3,1};
	bubblesort(tab, 5);
	int i=0;
	while(i<5){
		prnt('0'+tab[i]);
		i++;
	}
	prnt('\n');
}
