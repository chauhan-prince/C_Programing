#include<stdio.h>
int maze2(int n, int m){
    int rightWays = 0;
    int downWays = 0;
    if(n==1 &&m==1) return 1;
    if(n==1){
        rightWays += maze2(n,m-1);
    }
    if(m==1){
        downWays += maze2(n-1,m);
    }
    if(n>1 && m>1){
        rightWays += maze2(n,m-1);
        downWays += maze2(n-1,m);
    }
    int totalways = rightWays + downWays;
    return totalways;
}

int main(){

    int n;
    printf("Enter number of row of the maze : ");
    scanf("%d",&n);
     int m;
    printf("Enter number of column of the maze : ");
    scanf("%d",&m);

    int noOfWays = maze2(n,m);
    printf("%d",noOfWays);
    return 0;
}