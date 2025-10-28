#include <stdio.h>
int main(){
	double n;
	printf("nhap vao muc thu nhap 1 thang: ");
	scanf("%lf",&n);
	
	double m;
	if(n < 0){
		printf(" ban chua lam  ra tien");
	}else{
		if(n <= 5000000){
		m=n*(5.0/100);
	}else if (n <= 10000000){
		m=n*(10.0/100);
	}else{
		m=n*(15.0/100);
		}
	}
	printf("Ban co thu nhap: %.0lf, ban phai dong: %.0lf",n,m);
	return 0;
}

