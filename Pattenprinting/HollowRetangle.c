#include<stdio.h>
int main(){

    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
     int m;
    printf("Enter number of column : ");
    scanf("%d",&m);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int a=n;
            if(i==1 || j==1 ||i==a || j==a){
                printf("*");
            } 
            else{
                printf(" ");
            } 
        }
        printf("\n");
    }
    return 0;
}