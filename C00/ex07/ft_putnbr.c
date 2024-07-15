#include <unistd.h>


void prnt(char c){
	write(1,&c,1);
}

void ft_putnbr(int num){
	
	if (num==0){
		prnt('0');
	}
	else{
		if(num<0){
			num = -num;
		}
	
		int digs[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
		digs[0] = (num%10);
		int codigs=9;
		int divider=1000000000;
	
		while(codigs>=1){
			digs[codigs] += (num/divider);
	       		if(digs[codigs]>0){
				num -= digs[codigs]*divider;
			}
			divider = divider/10;
			int lead = 0;

			if(lead){
				prnt('0'+digs[codigs]);
				}
			codigs--;
		}
		prnt('0'+digs[0]);
		prnt('\n');
	}	
}

//range int: +- 2147483648
int main(void){
	int cuy = 94;
	ft_putnbr(cuy);
	return 0;	

}

