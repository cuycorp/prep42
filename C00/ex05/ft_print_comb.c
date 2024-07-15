#include <unistd.h>

void ft_print_comb(void){
	int hund= 48;
	int dec, units, count;
	int iniunits = 50, inidec=48, inicount=0;
	int adddec=1, cuenta=0;
	while(hund<=55){
		units = iniunits;
		count = 7-inicount;
		//write(1,"\n",1);
		//write(1,"outer loop",10);
		//write(1,&units,1);
		//write(1,"\n",1);
		dec = inidec + adddec;
		while(dec<=56){
			//write(1,"mid loop",8);
                	//write(1,&dec,1);
                	//write(1,"\n",1);
			
			while(units<=57){
				if(hund != dec && hund != units && units != dec){
					write(1,&hund,1);
					write(1,&dec,1);
					write(1,&units,1);
					if(!(hund==55 && dec==56 && units==57)){
						write(1,",",1);
						write(1," ",1);
					}
				cuenta++;
				}
			units++;
			}
			units = units-count;
			//write(1,"estado units",12);
			//write(1,&units,1);
			//write(1,"\n",1);
			dec++;
			count--;
		}

		//write(1,"\n",1);
		hund++;
		iniunits++;
		adddec++;
		inicount++;
	}
}

int main(){
	//write(1,"antes",5);
	//write(1,"\n",1);
	ft_print_comb();
	//write(1,"despues",7);
	write(1,"\n",1);
}
