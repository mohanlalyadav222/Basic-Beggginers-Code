#include<stdio.h>
//switch statement
int main(){
	int weekday;
	printf("Enter weekday:");
	scanf("%d",&weekday);
	switch(weekday){
		case 0:printf("Monday\n");break;
                case 1:printf("Tuesday\n");break;
		case 2:printf("Wednesday\n");break;
		case 3:printf("Thursday\n");break;
		case 4:printf("Friday\n");break;
		case 5:printf("Saturday\n");break;
		case 6:printf("Sunday\n");break;
		default:printf("Enter valid input\n");
		}
}	
