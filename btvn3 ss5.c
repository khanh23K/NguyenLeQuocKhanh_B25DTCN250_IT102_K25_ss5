#include <stdio.h>
int main(){
	float n;
	printf("nhap diem cua ban: ");
	scanf("%f",&n);
	
	if ('dtb<0 || dtb>10'){
		printf("diem cua ban ko hop le");
	}else if(n >= 8.0){
		printf("ban la Hoc sinh gioi");
	}else if(n >=6.5){
		printf("ban la Hoc sinh kha");
	}else if(n >=5.5){
		printf("ban la Hoc sinh trung binh");
	}else {
		printf("ba la Hoc sinh yeu");
	}
	return 0;
}

