#include<stdio.h>
int main(){

    int a;
    int b;
    int c;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    printf("Enter 3rd number : ");
    scanf("%d",&c);

    if(a+b>c && b+c>a && a+c>b){
        printf("Valide triangle ");
    }
    else{
        printf("Invalide tringle ");
    }
  return 0;
    
}
