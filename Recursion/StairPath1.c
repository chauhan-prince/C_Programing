#include<stdio.h>
int stair (int n){                      // single , double ways //
    if(n==1 || n==2) return n;
    int totalways = stair(n-1) + stair(n-2);
    return totalways;
}
int main(){
    int n;
    printf("Enter steps : ");
    scanf("%d",&n);

    int ways = stair(n);
    printf("%d",stair(n)); 
    return 0;
}