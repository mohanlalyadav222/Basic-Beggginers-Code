#include<stdio.h>
//check Palindrome
void main(){
	int n,reversedNumber=0,remainder,originalNumber;
	printf("Enter a number:");
	scanf("%d",&n);
	originalNumber=n;
	while(n!=0){
		remainder=n%10;
		reversedNumber=reversedNumber*10+remainder;
		n/=10;
	}
	(originalNumber==reversedNumber)?printf("Palindrome"):printf("Not a Palindrome");
}
