#include<stdio.h>
int main(){

    int n;
    printf("Enter number of ropws : ");
    scanf("%d",&n);

//    int nsp = n-1;
    for(int i=1;i<=n;i++){

        for(int q=1;q<=n-i;q++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            int d = j + 64 ;
            char ch = (char)d;
            printf("%c ",ch);
        }
       
        int a = i - 1;
        for(int k=1;k<=i-1;k++){
            int d = a + 64 ;
            char ch =(char)d;
            printf("%c ",ch);
             a--; 
        }
        printf("\n");
    }
    
    return 0;
}