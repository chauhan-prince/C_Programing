#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);

int a = n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=a;j++){          // j <= n + 1 - i;
            printf("* ");
        }
        a--;
        printf("\n");
    }
    return 0;
}