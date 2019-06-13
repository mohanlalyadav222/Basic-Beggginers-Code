#include<stdio.h>
/*Read 15 integers from user and print
sum of only positive integers*/
void main(){
	int n,i,sum=0;
	for(i=0;i<15;i++){
		printf("Enter integer no. %d of 15:",i+1);
		scanf("%d",&n);
		if(n<=0)
		continue;
		sum=sum+n;
           }
	
	printf("Sum of positive integers:%d\n",sum);
}
