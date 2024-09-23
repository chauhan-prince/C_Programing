#include<stdio.h>
int main(){

    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    int m;
    printf("Enter number of columns : ");
    scanf("%d",&m);
            // ***********........ upto n number of stars
    for(int i=1;i<=n;i++){          // outer loop --> number of lines
        for(int i=0;i<=m;i++){      //inner loop --> number of stars in  each lines
            printf("*");
        }
        printf("\n"); // har line ka baad ek enter maarne ka leya hai
    }
    return 0;
}
