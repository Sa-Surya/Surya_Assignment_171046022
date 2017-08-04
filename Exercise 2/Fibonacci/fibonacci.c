/*Write a program which checks the 3 numbers 
are from a Fibonacci series (3, 5, 8 or 21, 34, 55).*/

#include<stdio.h>
int Fibonacci();
int main(){
    int num1,num2,num3,flag;
    	printf("\nEnter the 1st number : ");
    	scanf("%d",&num1);
    	printf("\nEnter the 2nd number : ");
    	scanf("%d",&num2);
    	printf("\nEnter the 3rd number : ");
    	scanf("%d",&num3);
    flag=Fibonacci(num1,num2,num3);
    if(flag==1)
        printf("\nGiven numbers are Fibonacci Series\n");
    else
        printf("\nGiven numbers are not Fibonacci Series\n");
    return 0;
}
    
int Fibonacci(int num1,int num2, int num3){ 
    if(num1==0&&num2==1&&num3==1)
        return 1;
    if(num1+num2==num3){
        num3=num2;
        num2=num1;
        num1=num3-num2;
        if((num1<0)&&(num2<1)&&(num3<1))
            return 0;
        return Fibonacci(num1,num2,num3);
    }
    return 0;       
}