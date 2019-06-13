#include<stdio.h>
/*Print Fahrenheit-Celsius table
   for fahr=0,20,40....300*/
int main(){

int fahr,celsius,lower,upper,step;
lower=0;//lower limit
upper=300;//upper limit
step=20;
while(fahr<=upper){
	celsius=5*(fahr-32)/9;
	printf("%d\t  %d\n",fahr,celsius);
        fahr=fahr+step;

}
}

