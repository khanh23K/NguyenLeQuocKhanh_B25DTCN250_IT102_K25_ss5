#include <stdio.h>
int main(){
	float a,b;
	
	printf("nhap so thuc a: ");
	scanf("%f",&a);
	printf("nhap so thuc b: ");
	scanf("%f",&b);
	
	if(a==0){
		if(b==0){
			printf("Phuong trinh co vo so nghiem");
			}else{
				printf("Phuong trinh vo nghiem");
			}
	}else {
		float x = (float)-b/a ;
		printf("phuong trinh co nghiem duy nhat: x=%.2f",x);
	}
	return 0;
}

