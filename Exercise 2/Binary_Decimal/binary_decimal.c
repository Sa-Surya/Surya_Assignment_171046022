//Convert a decimal number to binary.

#include <stdio.h>
int binary_decimal();
int main(){
    long int number;
 
    printf("\nEnter a binary number(1s and 0s) : ");
    scanf("%ld",&number);
    binary_decimal(number); 
    return 0;
}

int binary_decimal(int number){
    long int binary,decimal=0,base=1,remainder;
        binary=number;
        while(number>0){
            remainder=number%10;
            decimal=decimal+remainder*base;
            number=number/10 ;
            base=base*2;
        }
    printf("\nThe Decimal equivalent of %ld is %ld\n",binary,decimal);
    return 0;
}
