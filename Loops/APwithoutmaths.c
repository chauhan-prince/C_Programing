#include<stdio.h>
int main(){

    int n;                  // itne baar loop chlega
    printf("Enter a number : ");
    scanf("%d",&n);
    // 4 7 10 13 16 19 ....... upto n number of terms
    // we are going to use extra varibles
    int a = 4;
    for(int i=4;i<=n;i++){
        printf("%d ",a);
        a = a + 3;
    }
    return 0;
}