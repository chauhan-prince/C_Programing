#include<stdio.h>
int main(){

    int n; 
    printf("Enter number of rows : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=i;j<n;j++){  // for(int j=1;j<=i;j++) --> Reverce Rhombus
            printf(" ");                              
        for(int k=1;k<=n;k++){                        
            printf("* ");
        }
        printf("\n");
        
    }
    }
    return 0;
}