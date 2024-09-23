#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool isprime(int n){
    bool flag = true;     // true means prime, false means composite
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            flag = false;
            break;
        }
    }
    if(n==1) flag = false;
    // if(flog==true) return true;
    //else return false;
    return flag;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        if(n%i==0){  // i is a factor of n
            if(isPrime(i)==true){
                printf("%d ",i);
            }
        }
    }
    return 0;
}