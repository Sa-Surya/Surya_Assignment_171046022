/*Convert watts to luminous flux. 
(ΦV(lm) = P(W) × η(lm/W)
lumens = watts × (lumens per watt)*/

#include<stdio.h>
int luminous_flux();
int main(){
	int watts, lumens_per_watt, lumens;
		printf("\nEnter the Power Consumption in Watts : ");
		scanf("%d",&watts);
		printf("\nEnter the Luminous Efficacy in Lumens per Watt : ");
		scanf("%d",&lumens_per_watt);
			lumens=luminous_flux(watts,lumens_per_watt);
		printf("\nThe Luminous Flux in lumens is : %d\n",lumens);
	return 0;
}

int luminous_flux(int watts, int lumens_per_watt){
	int lumens;
		lumens=watts*lumens_per_watt;
	return lumens;
}