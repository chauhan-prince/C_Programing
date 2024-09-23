#include<stdio.h>
int main(){

    struct pokemon{  // user defined data type
     int hp;
     int speed;
     int attack;
     char tier;     // S,A,B,C,D
    }pikachu,charizard,mewtwo;
    // struct pokemon pikachu;
    printf("Enter attack : ");
    scanf("%d",&pikachu.attack);
    // pikachu.attack = 60;
    pikachu.speed = 100;
    pikachu.hp = 50;
    pikachu.tier = 'A';

    printf("%c",pikachu.tier);

    // struct pokemon charizard;
    charizard.attack = 130;
    charizard.speed = 80;
    charizard.hp = 80;
    charizard.tier = 'S';

    // struct pokemon mewtwo;
    mewtwo.attack = 170;
    mewtwo.speed = 150;
    mewtwo.hp = 180;
    mewtwo.tier = 'G';

    return 0;
}