#include <stdio.h>
int main(){
	float a,b, c;
	printf("nhap so thuc a: ");
	scanf("%f",&a);
	printf("nhap so thuc b: ");
	scanf("%f",&b);
	
	char pheptoan;
	printf("nhap vao phep toan (+,-,*,/): ");
	fflush(stdin);
	scanf("%c",&pheptoan);
	
	switch(pheptoan){
		case'+':
			c=a+b;
			printf("tong cua 2 so: %.1f",c);
			break;
		case'-':
			c=a-b;
			printf("hieu cua 2 so: %.1f",c);
			break;
		case'*':
			c=a*b;
			printf("tich cua 2 so: %.1f",c);
			break;
		case'/':
				c=a/b;
				if(b==0){
					printf("ko the chia cho 0");
				}else{
					printf("thuong cua 2 so: %.1f",c);
					break;
				}
		default:
			printf("toan tu ko hop le");
	}
	return 0;
}

