#include<stdio.h>
//Pointer example 2
void main(){
	char a[6]="world";
	int i,j;
	for(i=0,j=5;i<j;a[i++]=a[j--]);
	printf("%s\n",a);
}
