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
    
    pokemon a, b, c;

    a.attack = 100;
    a.hp = 60;
    a.speed = 90;
    a.tier = 'A';
    strcpy(a.name,"Blastoise");

    // b.attack = a.attack ;
    // b.hp = a.hp;
    // b.speed = a.speed;
    // b.tier = a.tier; 

    b = a;              // DEEP COPY       // b ma bhi a aa gaya 

    b.speed = 150;    // b ke value bhi Modify kra sakte hai 

    printf("%d",b.attack);

    return 0;
}