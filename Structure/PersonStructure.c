#include<stdio.h>
#include<string.h>
int main(){

    struct Person{
        char name[50];
        int salary;
        int age;
    }a,b;

    a.salary = 15000;
    a.age = 19;
    strcpy(a.name,"Ravi");

    b.salary = 20000;
    b.age = 20;
    strcpy(b.name,"Rohan");

    printf("%s\n",a.name);
    printf("%d",b.age);

    return 0;
}