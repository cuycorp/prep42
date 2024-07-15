float ft_sqrt(int nb){
	float t=0.00001;
	int x0=nb;
	int x1x0=0.5*(x0+(nb/x0));
	while(x1x0>t||x1x0<-t){
		x0-=x1x0;
		x1x0=0.5*(x0+(nb/x0));
	}
	//de la formula matematica entiendo que x1x0 es al diferencia
	//pero parece que esa es la raiz
	//revisar chatgpt
	return x0;
}

