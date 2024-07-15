int ft_recursive_factorial(int nb){
	//base cae
	if(nb<0)
		return 0;
	if(nb<=1)//base case
		return 1;
	else//recursive case
		return nb*ft_recursive_factorial(nb-1);

}
