#include<stdio.h>
//program to make simple calculator
int main(){
	char operator;
	long int a,b;
	printf("Enter operator(+,-,*,/,%):");
	scanf("%c",&operator);
	printf("Enter two operands:");
	scanf("%ld %ld",&a,&b);
	switch(operator){
		case '+':printf("addition of a&b:%ld",a+b);break;
	        case '-':printf("subtraction of a&b:%ld",a-b);break;
		case '*':printf("Multiplication of a&b:%ld",a*b);break;
                case '/':printf("Divison of a&b:%ld",a/b);break;
               /*case '%':printf("Modulo of a&b:%lf",a % b);break;//we can use % operator with integers not floating point & double 
                                                                                               has floating pt. no.*/
		case '%':printf("Modulo of a&b:%ld",a%b);break;
                default:printf("Enter valid operator");
		}
}

