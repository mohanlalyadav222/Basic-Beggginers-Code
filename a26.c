#include<math.h>
#include<stdio.h>

//check weather armstrong no. or not 
int main(){
	int number,originalNumber,remainder,n=0,result=0;
	printf("Enter an integer:");
	scanf("%d",&number);
	originalNumber=number;
	while(originalNumber!=0){
		originalNumber/=10;
		++n;
	}
	originalNumber=number;
	while(originalNumber!=0){
		remainder=originalNumber%10;
		result+=pow(remainder,n);
		originalNumber/=10;
                }
		(result==number)? printf("Armstrong Number\n"):printf("Not a Armstrong Number\n");
}

	
