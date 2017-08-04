//Convert velocity in km/hr to m/s. ( 1kph = 0.2777778 m/s ).  

#include<stdio.h>
int main(){
	float kmph,mps;
		printf("\nEnter the velocity in Kilometer per Hour : ");
		scanf("%f",&kmph);
			mps=kmph*0.2777778;
		printf("\nThe velocity in Meter per Second is : %f\n",mps);
	return 0;
}

