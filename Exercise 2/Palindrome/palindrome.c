//Check entered number is a palindrome.

#include<stdio.h>
#include<string.h>
int palindrome();
int main(){
    char string[20];
    int flag=0;
	    printf("\nEnter a string: ");
        scanf("%s",string);
    flag=palindrome(string);
    if(flag==1)
        printf("\n%s is a Palindrome\n",string);
    else
        printf("\n%s is not a Palindrome\n",string);
    return 0;
}


int palindrome(char string[]){
    int length=strlen(string),j=length,i,flag=0;
    char revstring[20]; 
    for(i=0;i<length;i++){
    	revstring[j-1]=string[i];
    	j--;
    }
    for(i=0;i<strlen(string);i++){
        if(string[i]==revstring[i])
    	   flag=1;
        else
    	   flag=0;
    }
    return flag;
}
    