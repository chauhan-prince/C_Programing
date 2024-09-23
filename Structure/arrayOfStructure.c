#include<stdio.h>
#include<string.h>
int main(){

    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;

    pokemon arr[3];
    arr[0].attack = 80;
    arr[0].hp = 70;
    arr[0].speed = 100;
    arr[0].tier = 'A';
    strcpy(arr[0].name,"charizard");

    arr[1].attack = 190;
    arr[1].hp =100;
    arr[1].speed = 150;
    arr[1].tier = 'S';
    strcpy(arr[1].name,"mewtwo");

    arr[2].attack = 90;
    arr[2].hp = 80;
    arr[2].speed = 100;
    arr[2].tier = 'B';
    strcpy(arr[2].name,"Pikachu");

    for(int i=0;i<3;i++){
        printf("%s\n",arr[i].name);
        printf(" Attack : %d\n",arr[i].attack);
        printf(" HP : %d\n",arr[i].hp);
        printf("Speed : %d\n",arr[i].speed);
        printf("Tier : %c\n",arr[i].tier);
    }
    
    return 0;
}