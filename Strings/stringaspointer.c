#include<stdio.h>
#include<string.h>
int main(){

    char str[] = "College Wallah";
    // char*ptr = str;  // ptr now pointer to str[0]
    // int i = 0;
    // while(*ptr!='\0'){                               
    //     printf("%c",*ptr);
    //     ptr++;
    //     i++;
    // }

    //   char* ptr = str;
    //   ptr = "Physics Wallah";         // In Pointer intialization, we can modify ENTIRE string  but not individual character;;
      char*p = str;                 
      *p = 'P';                         // In normal intialization, we can modify individual character but not the ENTIRE string;;
      printf("%s",str);

    return 0;
}