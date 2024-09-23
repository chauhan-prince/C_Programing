#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){

    typedef struct date{
        int day;
        int month;
        int year;
    } date;

    date a, b;

    a.day = 9;
    a.month = 3;
    a.year = 2004;

    b.day = 20;
    b.month = 6;
    b.year = 2024;

    bool flag = true;
    if(a.day!=b.day) flag = false;
    if(a.month!=b.month) flag = false;
    if(a.year!=b.year) flag = false;

    if(flag==true) printf("The dates are same");
    else printf("The dates are different");

    return 0;
}