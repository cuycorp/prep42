#include <stdio.h>
//char is[]={0,2,4,6,8,11,11,11,11,11};
//char js[]={0,1,2,3,4,11,11,11,11,11};

int ft_srch(int i, int *index);
int ft_dgl_chk(int *pos);

int ft_ten_queens_puzzle(void);

int main(void){
	int pos[2]={5,3};	
	printf("diagonal libre %d\n",ft_dgl_chk(pos));	
	//int ft_ten_queens_puzzle(void);
	//printf("all places queen: %s\n",s);
}
