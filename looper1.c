#include<stdio.h>
int main(){
	int num,lastdigit,firstdigit,sum;
	printf("Enter any number:");
	scanf("%d",&num);
	
	lastdigit=num%10;
	firstdigit=num;
	while(num>=9){
		num=num/10;
	
	}
	firstdigit=num;
	sum=firstdigit+lastdigit;
	printf("%d",sum);
}
