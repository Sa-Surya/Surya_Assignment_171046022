//Check to see, if the year is a leap year or not.

#include<stdio.h>
int check_leap();
int main(){
	int year;
	printf("\nEnter the year to be checked : ");
	scanf("%d",&year);
check_leap(year);
	return 0;
}

int check_leap(int y){
	if(y%4==0)
	printf("\n%d is a leap year\n",y);
	else
	printf("\n%d is not a leap year\n",y);
	return 0;
}
