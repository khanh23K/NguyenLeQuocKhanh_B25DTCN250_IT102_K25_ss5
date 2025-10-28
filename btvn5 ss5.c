#include <stdio.h>
int main(){
	int n;
	printf("nhap vao tuoi cua khach: ");
	scanf("%d",&n);
	
	
	if(n<=0){
		printf("tuoi nhap vao ko dung");
	}else{
		double a = 20000;
		double b;
	
		if(n<=6){
		 b = 0;
		}else if(n<=18){
		 b = a*50/100;
		}else if(n<=60){
		 b = a;
		}else{
		 b = a*70/100;
		}
	printf("Hanh khach %d tuoi, gia ve: %.0lf(VND)",n,b);
	}
	return 0;
}

