#include <stdio.h>
int main(){
	char kitu;
	printf("nhap vao 1 ki tu chu thuong: ");
	scanf("%c",&kitu);
	if (kitu<97 || kitu>122){
		printf("ban phai nhap ki tu tu a-z");
	}else {
		char chuHoa = kitu - 32 ;
		printf("Ki tu chu hoa: %c",chuHoa);
	}
	return 0;
}
