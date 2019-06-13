#include<stdio.h>
/*Print Fahrenheit-Celsius table
   for fahr=0,20,40....300;floating-point version*/
int main(){
float fahr,celsius;
int lower,upper,step;
lower=0;//lower limit
upper=300;//upper limit
step=20;
while(fahr<=upper){
	celsius=5.0/9.0*(fahr-32);
	printf("%3.0f\t%6.1f\n",fahr,celsius);
        fahr=fahr+step;

}
}

