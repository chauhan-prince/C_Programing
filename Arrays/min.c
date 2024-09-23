#include<stdio.h>
int main(){

    int arr[7] ={ 2,5,9,7,1,6,8};
    int min = arr[0];
    for(int i=1;i<=7;i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    printf("%d",min);
    return 0;
}