#include<stdio.h>
void main(){
	int n,i;
	unsigned long long factorial=1;
	printf("Enter an integer:");
	scanf("%d",&n);
	if(n<0)
		printf("Factorial for negative numbers does not exist");
	else{
		for(i=2;i<=n;i++)
			factorial*=i;
		printf("Factorial of %d=%llu",n,factorial);
	}
}
