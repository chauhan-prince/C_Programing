#include<stdio.h>
#include<stdbool.h>
int main(){

    int arr[7] = {12,21,40,41,5,8,15};
    int x= 42;
    int idx = -1;
    bool flag = false;  // false mens not present
    for(int i=0;i<=6;i++){
        if(arr[i]==x){
            flag = true; // true mens present 
            idx = i;
            break;
        }
    }
    if(flag==false){
        printf("%d is not present in the array",x);
    }
    else{
        printf("%d is present in the array and its index is %d",x,idx);
    }
    return 0;
}