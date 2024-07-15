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


int ft_find_next_prime(int nb){
	int next=nb+1;
	//printf("mlt %d\n",next);
	int i=ft_is_prime(next);
	if(i)
		return next;
	next++;
	//printf("mlt %d\n",next);
	i=ft_is_prime(next);
	while(!i){
		next++;
		//printf("mlt %d\n",next);
		i=ft_is_prime(next);
	}
	return next;
}
