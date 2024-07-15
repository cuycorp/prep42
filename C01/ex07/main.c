void ft_rev_int_tab(int *tab, int size);
void prnt(char c);
int ft_strlen(int *str);

int main(void){
	//reverse any type of array int or char?
	int tab[]={1,3,9,6,1};
	int size;
	int i=0;
	size = ft_strlen(tab);
	ft_rev_int_tab(tab,size);
	
	while(i<size){
		prnt('0'+tab[i]);
		i++;	
	}
	prnt('\n');
}
