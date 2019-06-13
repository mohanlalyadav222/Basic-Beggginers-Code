#include<stdio.h>
//pointers example
void main(){
	int x=5;
	int *y=&x;
	printf(" x=%d\n",x);
        printf("&x=%u\n",&x);
        printf(" y=%u\n",y);
        printf("*y=%d\n",*y);
        printf("&y=%u\n",&y);
}

