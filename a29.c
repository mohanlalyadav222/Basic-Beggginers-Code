#include<stdio.h>
//Generate Fibonacci series
void main(){
	int first,second,num,sum,counter=0;
	printf("Enter the number of terms:");
	scanf("%d",&num);
	printf("Enter first & second number:");
	scanf("%d %d",&first,&second);
	printf("\nFibonacci series:%d,%d",first,second);
	while(counter<num){
		sum=first+second;
		printf(",%d",sum);
		first=second;
		second=sum;
		counter++;
	}
}
