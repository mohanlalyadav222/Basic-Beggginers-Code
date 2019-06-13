#include<stdio.h>
//find sum of N natural numbers using for,while,do-while loop
int main(){
	int N,i,sum=0;
	printf("Enter value of N:");
	scanf("%d",&N);
	//using for loop      
          /*for(i=1;i<=N;i++){
		sum=sum+i;
	}*/
       //using while
     /*while(i<=N){
           sum=sum+i;
           i++;
           }*/
       //using do-while
        do{
        sum=sum+i;
          i++;
         }while(i<=N);
          
	printf("sum of natural nos:%d\n",sum);
  }
