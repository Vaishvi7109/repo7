#include<stdio.h>
int main(){
	int num,digit,count=0;
	printf("Enter a number:");
	scanf("%d",&num);
	while(num>0){
		digit=num%10;
		num=num/10;
		count++;
	}
	printf("%d",count);
}
