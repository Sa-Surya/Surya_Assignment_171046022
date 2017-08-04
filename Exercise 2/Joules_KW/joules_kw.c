//Convert Joules to Kilo-Watts (Input Variables : Joules and Time)

#include<stdio.h>
#include<math.h>
float joules_kw();
int main(){
	int joules,time; 
	float kw;
		printf("\nEnter the Joules : ");
		scanf("%d",&joules);
		printf("\nEnter the Time Duration in Seconds : ");
		scanf("%d",&time);
	kw=joules_kw(joules, time);
	printf("\nThe Power Consumption in Kilo-Watts is %fkW\n",kw);
	return 0;
}

float joules_kw(int j, int t){
	float kw, s;
	s=(1000*t);
	kw=j/s;
return kw;
}
