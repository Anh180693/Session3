#include<stdio.h>
int main(){
	int n;
	printf("Nhap n : ");
	scanf("%d",&n);
	int i = 1,C = 0;
	while(i <=n){
		if(n%i==0){
			C++;
		}
		i++;
	}
	if(C == 2){
		printf("%d la so nguyen to ",n);
	}
	else{
		printf("%d khong la so nguyen to ",n);
	}
}
