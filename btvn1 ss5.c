#include <stdio.h>
int main(){
	int a,b;
	printf("nhap so nguyen A: ");
	scanf("%d",&a);
	printf("nhap so nguyen B: ");
	scanf("%d",&b);
	if (a > b){
		printf("so lon hon la: %d ",a);
	}else if ( a < b ){
		printf("so lon hon la: %d ",b);
	}else{
		printf("hai so bang nhau");
	}
	return 0;
}

