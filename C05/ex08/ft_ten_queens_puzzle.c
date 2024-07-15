char is[]={0,2,4,6,8,11,11,11,11,11};
char js[]={0,1,2,3,4,11,11,11,11,11};
//[3,2]

int ft_srch(int i, int *index){
	int k=0;
	while(k<10){
		if(i==is[k]){
			*index=k;
			return 1;
		}
		k++;
	}
	return 0;
}

//testear
int ft_dgl_chk(int *pos){
	//left
	int i=pos[0]-1;
	int j=pos[1]-1;
	int index=0;
	int clear=1;
	while((i>=0)&&(j>=0)){
		if(ft_srch(i,&index)&&js[index]==j)
			return clear=0; 
		index=0;
		i--;
                j--;
	}
	//right
	i=pos[0]+1;
        j=pos[1]-1;
        while((i<=10)&&(j>=0)){
                if(ft_srch(i,&index)&&js[index]==j)
                        return clear=0;
                index=0;
                i--;
                j--;
        } 
}

/*
int ft_ten_queens_puzzle(void){
	int q;
	int i=0, j=0;
	while(q<10){
		
		q++
	}
	
}
*/
