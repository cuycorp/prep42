#include <stdio.h>
int ft_is_prime(int nb){
	int mlt=2;
	if(nb==0||nb==1)
		return 0;
	while(mlt<nb){
		//printf("mlt %d\n",mlt);
		if(!(nb%mlt))
			return 0;
		mlt++;
	}
	return 1;
}
