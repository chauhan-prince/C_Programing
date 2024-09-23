#include<stdio.h>
int main(){

    // int i = 2*3/4+4/4+8-2+5/8;                                          // B, O, D/M, A/S ;
    // printf("%d",i);



   int i = 2, j = 3, k, l;
   float a, b ;
   k = i/j*j;
   l = j/i*i;
   a = i/j*j;                                    // float me 6 decimal tak he acurate answer data h ;
   b = j/i*i;
   
   printf(" %d\n %d\n %f\n %f\n",k, l, a, b);

    return 0;
}