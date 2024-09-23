#include<stdio.h>
int stair (int n){                      // single , double , triple ways //
    if(n==1 || n==2 || n==3) return n;
    int totalways = stair(n-1) + stair(n-2) + stair(n-3);
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