 #include<stdio.h>
 #include<string.h>
 
 int main(){
    typedef struct pokemon{
        int hp ;
        int speed;
        int attack;
        char tier;
    }pokemon;

     pokemon arr[3];
     arr[0].attack = 50;
     arr[0].speed = 100;
     arr[0].hp = 30;
     arr[0].tier = 'A';

     arr[1].attack = 150;
     arr[1].speed = 200;
     arr[1].hp = 130;
     arr[1].tier = 'S';
 
     arr[2].attack = 80;
     arr[2].speed = 140;
     arr[2].hp = 60;
     arr[2].tier = 'A';
     
     for(int i=0;i<3;i++){
        //printf("%s\n",arr[i].name);
        printf(" Attack : %d\n",arr[i].attack);
        printf(" HP : %d\n",arr[i].hp);
        printf("Speed : %d\n",arr[i].speed);
        printf("Tier : %c\n",arr[i].tier);
    }
     
     return 0;
 }