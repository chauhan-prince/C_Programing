#include<stdio.h>
#include<string.h>
int main(){

    struct Book {  // user defined data type
      int noOfpages;
      float price;
      char name[50];
    } a, b, c;

    a.noOfpages = 100;
    a.price = 411.5;
    strcpy(a.name,"Secret Seven");

    b.noOfpages = 200;
    b.price = 150.5;
    strcpy(b.name,"Famos Five");

    printf("%d\n",b.noOfpages);
    printf("%f\n",b.price);
    printf("%s\n",b.name);
    return 0;
}