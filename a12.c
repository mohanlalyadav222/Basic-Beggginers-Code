#include<stdio.h>
//find the largest among three numbers[method 2 nested if]
int main(){
	int n1,n2,n3;
	printf("Enter three number:");
	scanf("%d %d %d",&n1,&n2,&n3);
	if(n1>n2){
         if(n1>n3)
         printf("%d is the largest num\n",n1);
          else 
            printf("%d is the largest num\n",n3);
      }
     else {
        if(n2>n3)
         printf("%d is the largest num\n",n2);
        else
           printf("%d is the largest num\n",n3);
}
}
