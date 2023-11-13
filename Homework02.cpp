#include<stdio.h>
int main(){
	float revenue,interestRate;
	printf("Nhap vao doanh thu: ");
	scanf("%f",&revenue);
	if(revenue<=100000000){
		interestRate=revenue/20;
	}else if(revenue>300000000){
		interestRate=revenue/5;
	}else{
		interestRate=revenue/10;
	}
	printf("Hoa hong la: %.1f",interestRate);
}
