#include<stdio.h>
int main(){
	char ch='a';
	printf("%c",ch);
	do{
		if(ch<=122){
			printf("\n%c",ch);
		ch++;
		}
	}
	while(ch<='z');
}
