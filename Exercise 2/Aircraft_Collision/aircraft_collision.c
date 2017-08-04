/*Aircraft lands with a velocity of 320 km/hr and remaining 
runway length is 1400 mts. Aircraft deceleration is 2.85 m/s2 . 
Check whether aircraft lands safely within the runway or not. 
(final_velocity2=initial_velocity2+2*acceleration*distance).*/

#include<stdio.h>
#include<math.h>
int kmph_mps();
int main(){
	int initial_velocity=320,x=320,final_velocity=0,collision_distance=1400;
	float distance,acceleration=-2.85;
		initial_velocity=kmph_mps(initial_velocity);
		distance=((pow(final_velocity,2))-(pow(initial_velocity,2)))/(2*acceleration);
	if(distance<collision_distance)
		printf("\nAircraft landing with %dkmph and accelerating at the rate of %fm/s*s on a runway with length %d metres will land safely.\n",x,acceleration,collision_distance);
	else
		printf("\nAircraft landing with %dkmph and accelerating at the rate of %fm/s*s on a runway with length %d metres will not land safely.\n",x,acceleration,collision_distance);
	return 0;
}

int kmph_mps(int kmph){
	int mps;
		mps=kmph*0.2777778;
	return mps;
}