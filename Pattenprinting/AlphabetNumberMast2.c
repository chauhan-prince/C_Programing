#include<stdio.h>
int main(){
    
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);

    int nst = n;
    int nsp = 1;
    for(int i=1;i<=2*n+1;i++){
        printf("%c",i+64);
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        int a = 1;
        for(int i=1;i<=nst;i++){
            printf("%c",a+64);
            a++;
        }
        for(int j=1;j<=nsp;j++){
            printf(" ");
            a++;
        }
        for(int k=1;k<=nst;k++){
            printf("%c",a+64);
            a++;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}