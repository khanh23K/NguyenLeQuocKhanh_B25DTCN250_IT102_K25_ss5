#include <stdio.h>
int main(){
	float n;
	printf("nhap diem cua ban: ");
	scanf("%f",&n);
	if(n >= 6.5){
		printf("ban la Hoc sinh gioi");
	}else if(n >=5.0){
		printf("ban la Hoc sinh kha");
	}else if(n){
		printf("ban la Hoc sinh yeu");
	}
	return 0;
}

