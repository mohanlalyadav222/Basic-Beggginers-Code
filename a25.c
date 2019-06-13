#include<stdio.h>
//count no. of digits in an integer
void main(){
	int n,count=0;
	printf("Enter an integer:");
	scanf("%d",&n);
	while(n!=0){
		n/=10; // n=n/10;
		++count;
	}
	printf("Number of digits:%d\n",count);
}
