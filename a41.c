#include<stdio.h>
//find if two arrray have any common element
int isCommon(int a[],int b[],int n,int m){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(a[i]==b[j])
				return 1;
		}
	}
	return 0;
  }
 void main(){
	 int c;
	 int x[5]={1,2,3,4,5};
	 int y[5]={10,15,12,13,4};
		 c=isCommon(x,y,5,5);
		 if(c==1)
			 printf("Arrays have common element\n");
		 else
			 printf("Arrays don't have common element\n");
	 }
