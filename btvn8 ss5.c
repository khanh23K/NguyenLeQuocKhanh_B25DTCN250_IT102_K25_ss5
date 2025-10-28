#include <stdio.h>
int main(){
	double n;
	printf("M khoi nuoc tieu: ");
	scanf("%lf",&n);
	
	double m;
	if (n<=10){
		m=n*6000;
	}else if(n<=20){
		m=n*6000+n*7000;
	}else if(n<=30){
		m=n*6000+n*7000+n*8500;
	}else{
		m=n*6000+n*7000+n*8500+n*10000;
	}
	printf("Tong gia tien phai tra: %.0lf",m);
	return 0;
}

