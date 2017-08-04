//Change the case of an alphabet.

#include <stdio.h>
char uppercase(); 
int main(){
	char string[100];
		printf("\nInput a string : ");
   		scanf("%s",string);
   	uppercase(string);		
 	return 0;
}


char uppercase(char string[]){
	int i=0;
	char change;
		while (string[i]!='\0'){
      		change=string[i];
      	if (change>='A'&&change<='Z')
        	string[i]=string[i]+32;
      	else if(change>='a'&&change<='z')
         	string[i]=string[i]-32;   
		i++;   
   	}
   	printf("\nThe string after changing case is : %s\n",string);
   	return 0;	
}
	
