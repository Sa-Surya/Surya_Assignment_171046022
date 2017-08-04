//WAP to check the sum of the digits in a number

#include<stdio.h>
int add();
int main(){
   long int n,sum;
   printf("\nEnter the number whose digits should be added : ");
   scanf("%ld",&n);
   sum=add(n);
   printf("Sum of digits of %ld = %ld\n",n,sum);
   return 0;
}

int add(long int number){
   long int remainder,sum;
   while(number!=0){
      remainder=number%10;
      sum=sum+remainder;
      number=number/10;
   }
   return sum;
}