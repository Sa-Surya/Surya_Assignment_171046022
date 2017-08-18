/*Convert a decimal number in the range from 0-1000 
to its equivalent roman number.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char int_roman();
struct {
    int value;
    char roman_digits[3];
} roman_table[] =    {{1000, "M"},
                    {900,   "CM"},
                    {500,   "D"},
                    {400,   "CD"},
                    {100,   "C"},
                    {90,    "XC"},
                    {50,    "L"},
                    {40,    "XL"},
                    {10,    "X"},
                    {9,     "IX"},
                    {5,     "V"},
                    {4,     "IV"},
                    {1,     "I"}};

int main(){
    int n;
    printf("\nEnter a number under 1000 : ");
    scanf("%d",&n);
    int_roman(n);
return 0;
}

char int_roman(int n){
    char roman_number[10];
    int i = 0,temp=n;
    while(n){
        while(n<roman_table[i].value)
            i++;
        while(n>=roman_table[i].value){
            strcat(roman_number, roman_table[i].roman_digits);
            n-=roman_table[i].value;
        }
    }
printf("\nThe number %d in Roman Numbers is %s\n",temp,roman_number);
return 0;
}
