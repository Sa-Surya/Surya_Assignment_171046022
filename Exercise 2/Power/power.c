//Compute the power of an integer ‘m’, raised to a positive integer ‘n’. Example power(2,5) is 32.

#include<stdio.h>
long int power();
int main(){
	long int m,n,total;
	printf("\nEnter the integer m : ");
	scanf("%ld",&m);
	printf("\nEnter the power n : ");
	scanf("%ld",&n);
	total=power(m,n);
	printf("\nThe value of %ld power %ld is : %ld\n",m,n,total);
return 0;
}

long int power(int m,int n){
	int i;
	long int total=m;
	for(i=1;i<=n-1;i++){
	total=total*m;
	}
return total;
}