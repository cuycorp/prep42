#include <unistd.h>

void ft_putnbr(int nb){
	//range of int -2147483647 to 2147483647
	if(nb<0)
		write(1,"-",1);
	int divisor=1;
	//find max divisor
	while(nb/divisor >=10)
		divisor*=10;
	while(divisor>0){
		int dig = '0'+ nb/divisor;
		write(1,&dig,1);
		nb%=divisor;
		divisor/=10;
	}
	write(1,"\n",1);

}
