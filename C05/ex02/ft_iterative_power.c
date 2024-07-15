int ft_iterative_power(int nb, int power){
	if(power<0)
		return 0;
	if(nb==0){
		if(power==0)
			return 1;
		return 0;
	}
	int r=nb;
	while(power>1){
		r*=nb;
		power--;
	}
	return r;
}
