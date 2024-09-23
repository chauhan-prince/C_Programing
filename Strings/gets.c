#include<stdio.h>
#include<string.h>
int main(){

    char str[40];
    scanf("%s",str);  // only the first world will be considered
   // scanf("%[^\n]s",str);   // entire sentence can be input
    // gets(str);  // entire sentence can be input
    printf("your input was : %s",str); 
    
    return 0;
}