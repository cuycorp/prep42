int ft_iterative_factorial(int nb){
	int fact=1;
	if(fact<0)
		return 0;
	while(nb>1){
		fact*=nb;
		nb-=1;
	}
	return fact;
}
