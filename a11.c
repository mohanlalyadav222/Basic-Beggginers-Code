#include<stdio.h>
//find the largest among three numbers[method 1]
int main(){
	int n1,n2,n3;
	printf("Enter three number:");
	scanf("%d %d %d",&n1,&n2,&n3);
	if(n1>n2&&n1>n3)
        printf(" %d is the larges number\n",n1);
	else if(n2>n1&&n2>n3)
	printf("%d is the largest number\n",n2);
	else
	printf("%d is the largest number\n",n3);

}
