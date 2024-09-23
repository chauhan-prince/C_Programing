#include<stdio.h>
int main(){

    int arr[5] = {2,3,4,2,1};
    int product = 1;
    for(int i=0;i<5;i++){
        product = product * arr[i];
    }
    printf("%d",product);
    return 0;
}