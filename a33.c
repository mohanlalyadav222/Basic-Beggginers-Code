#include<stdio.h>
long power(int base,int n){
	long p;
	for(p=1;n>0;n--){
		p=p*base;
	}
	return p;
   }
  void main(){
	  int b=2,num=3;
	  long NumPower = power(b,num);
	  printf("Power of base=%d,&num=%d is %ld",b,num,NumPower);
  }

