#include<stdio.h>
int main(){
  
  int originalnumber,r,res;

  for(int i=1;i<=500;i++){
    originalnumber = i;
    res = 0;

    while(originalnumber!=0){
      r = originalnumber % 10;
      res +=r * r * r;            
      originalnumber /= 10;
    }
    
    if(res==i){
      printf("%d\n",i);
    }
  }

   return 0;
}
