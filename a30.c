#include<stdio.h>
//function of max
int max(int,int);
void main(){
	int a=100,b=200;
	int maximum=max(a,b);
        printf("Maximum value is:%d",maximum);
}
int max(int x,int y){
	return(x>y)?x:y;
}
