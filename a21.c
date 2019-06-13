#include<stdio.h>
void main(){
	int n,i;
        for(i=0;i<15;i++){
		printf("Read integer:\n");
	        scanf("%d",&n);
		if(n<0){
			break;
		}
	}
}
