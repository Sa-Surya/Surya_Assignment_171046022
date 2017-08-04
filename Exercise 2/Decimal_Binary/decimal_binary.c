//Convert a decimal number to binary.

#include <stdio.h>
long int decimal_binary();
int main(){
    long int decimal,binary;
    printf("\nEnter a Decimal Number : ");
    scanf("%ld",&decimal);
    binary=decimal_binary(decimal);
    printf("\nBinary number of %ld is %ld\n",decimal,binary);
    return 0;
}
 
long int decimal_binary(long int decimal){
    int remainder; 
    long int binary=0,i=1;
    while(decimal!=0){
        remainder=decimal%2;
        decimal=decimal/2;
        binary=binary+(remainder*i);
        i=i*10;
    }
    return binary;
}