#include<stdio.h>
int main(){

    int n;
    printf("Enter percentage : ");
    scanf("%d",&n);

    // more then 80 A grade
    // more ten 60 B grade
    //more then 40 c grade
    // lass then 40 D grade

    // if(n>80){
    //     printf("A Grade");
    // }
    // else if(n>60){
    //     printf("B Grade");
    // }
    // else if(n>40){
    //     printf("C Grade");
    // }
    // else{
    //     printf("D Grade");
    // }

    if(n>80){
        printf("A Grade");
    }
    else{
        if(n>60)
            printf("B Grade");
        else    
            if(n>40)
                printf("C Grade");
            else
                printf("D Grade");
            
    }
    return 0;
}
