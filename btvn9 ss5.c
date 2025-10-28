#include <stdio.h>
int main(){
	float a; 
	int b; 
	int c; 
	
	printf("Nhap vao he so luong: ");
	scanf("%f",&a);
	printf("Nhap vao so ngay cong: ");
	scanf("%d",&b);
	printf("Nhap vao chuc vu (1-2-3): ");
	scanf("%d",&c);
	
	if(b<0 || b>31 || c<1 || c>3 || a<0){
		printf("Ban nhap khong dung du lieu");
	}else{
		double luong; 
		double phucap;
		double thuong = 0;
		fflush(stdin);
		
		switch(c){
			case 1:
				phucap = 500000;
				break;
			case 2:
				phucap = 1000000;
				break;
			case 3:
				phucap = 2000000;
				break;
		}
		
		
		thuong = (b-26)*200000;
		
		luong = b*160000*a + c + thuong;
		printf("Luong cua ban la: %.0lf",luong);
	}
}
