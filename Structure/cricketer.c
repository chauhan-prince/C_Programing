#include<stdio.h>
#include<string.h>
int main(){

    typedef struct cricketer{
        char firstname[15];
        char lastname[15];
        int age;
        int noOfmatches;
        float average;
    }cricketer;

     cricketer arr[3];

    for(int i=0;i<3;i++){
        scanf("%s",arr[i].firstname);
        scanf("%s",arr[i].lastname);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].noOfmatches);
        scanf("%f",&arr[i].average);
    }
     for(int i=0;i<3;i++){
        printf("Name : %s %s\n",arr[i].firstname,arr[i].lastname);
        // printf("Last Name : %s\n",arr[i].lastname);
        printf("age : %d\n",arr[i].age);
        printf("No of Macthes played : %d\n",arr[i].noOfmatches);
        printf("average : %f\n\n",arr[i].average);
     }

    return 0;
}