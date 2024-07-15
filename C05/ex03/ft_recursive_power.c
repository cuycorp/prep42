int ft_recursive_power(int nb, int power){
	//base case power=1
	if(power==0)
		return 1;
	if(power==1)
		return nb;
	return nb*ft_recursive_power(nb,power-1);
}
