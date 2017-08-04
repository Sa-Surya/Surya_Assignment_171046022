/*Car is traveling at a speed of 80 km/hr and a truck 
is stationed at a distance of 30 mts. Truck will start 
moving exactly after 3 second. If the car driver applies 
brake now find out whether car will hit the truck or not. 
(distance=((initial velocity+final velocity)/2)*time).*/

#include<stdio.h>
int kmph_mps();
int main(){
	int initial_velocity=80,final_velocity=0,distance,time=3,collision_distance=30;
	initial_velocity=kmph_mps(initial_velocity);
	distance=((initial_velocity+final_velocity)/2)*time;
	if(distance<=collision_distance)
	printf("\nNo Collision\n");
	else
		printf("\nCollision Imminent\n");
	return 0;
}

int kmph_mps(int kmph){
	int mps;
		mps=kmph*0.2777778;
	return mps;
}