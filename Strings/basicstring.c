#include<stdio.h>
int main(){
    
    // char arr[5] = {'a','b','t','g','n'};
    // printf("%c ",arr[3]);

    // char ch = '0';
    // int x = (int)ch;
    // printf("%d",x);


    char arr[] = {'H','e','l','l','o','\0'};
    // char ch = '\0';     // null character
    // int x = 0;
    // char a = (char)x;
    // printf("%c",a);
    int i= 0;
    while(arr[i]!='\0'){
        printf("%c ",arr[i]);
        i++;
    }

    return 0;
}