#include<stdio.h>
int main(){
    
    int Ram;
    printf("Enter Ram age : ");
    scanf("%d",&Ram);

    int Shyam;
    printf("Enter Shyam age : ");
    scanf("%d",&Shyam);

    int Ajay;
    printf("Enter Ajay age : ");
    scanf("%d",&Ajay);

    if(Ram>Shyam && Ram >Ajay){
        printf("%d Ram is youngest age",Ram);
    } 
    if(Shyam>Ram && Shyam >Ajay){
        printf("%d Shyam is youngest age",Shyam);
    } 
    if(Ajay>Shyam && Ajay>Ram){
        printf("%d Ajay is youngest age",Ajay);
    } 

   return 0;
}