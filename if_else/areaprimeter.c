#include<stdio.h>
int main(){

    int length;
    printf("Enter the length : ");
    scanf("%d",&length);

    int breadth;
    printf("Enter the breath : ");
    scanf("%d",&breadth);

     int a = length * breadth;
     int p = 2 * (length + breadth);
    

     if(a>p){
        printf("Area is greater then perimeter");
     }
     
     if(p>a){
        printf("Area is lass then perimeter");
     }

     if(p==a){
        printf("Area is equle to perimeter");
     }
     
    return 0;
}