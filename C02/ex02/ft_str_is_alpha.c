#include <unistd.h> 
int ft_str_is_alpha(char *str){
	//int mayu= 41, minu=97;
	int i=0;
	char mayu=65, minu=97;	
	int isPurel=0;
	int ins=1;

	while(str[i]&&ins){
		
		while(mayu<91){
			if (str[i]==mayu){
				isPurel=1;
				mayu=90;
				minu=122;
			}
			mayu++;
		}

		
		while(minu<123){
			if (str[i]==minu){
                                isPurel=1;
                                minu=122;
                        }
                        minu++;
		}
		
		if(!isPurel){
			ins=0;
			write(1,&ins,1);
		}
		isPurel=0;
		mayu=65;
		minu=97;
		i++;
	}
	return ins;
}
