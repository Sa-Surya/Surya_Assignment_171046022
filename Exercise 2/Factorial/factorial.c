/*WAP to Calculate the series 1 + 1/2! + 1/3! + ... 
upto N terms.*/

#include<stdio.h>
float factorial();
int main(){
int n;
float f;
 	printf("\nEnter a number: ");
 	scanf("%d",&n);
 	f=factorial(n);
 	printf("\nThe value of the nth series is : %f\n",f);
return 0;
}

float factorial(int n){
float i,tmp=1,fact=0;
	for(i=1;i<=n;i++)
    {
    tmp=tmp*i;
    fact=fact+(1/tmp);
    }
return fact;
}