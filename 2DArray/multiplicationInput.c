#include<stdio.h>
int main(){

// 1st matrix order
int m;
printf("Enter number of rows of 1st matris : ");
scanf("%d",&m);
int n;
printf("Enter number of rows of 1st matris : ");
scanf("%d",&n);
int a[m][n];
// Input the first matrix
printf("\nEnter element of 1st matrix : ");
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
}
// 2nd matrix order
int p;
printf("Enter number of rows of 2nd matris : ");
scanf("%d",&p);
int q;
printf("Enter number of rows of 2nd matris : ");
scanf("%d",&q);
int b[p][q];
// Input the first matrix
printf("\nEnter element of 2nd  matrix : ");
for(int i=0;i<p;i++){
    for(int j=0;j<q;j++){
        scanf("%d",&b[i][j]);
    }
}
// chek 
if(n!=p){
    printf("The matrix can not be multiplied");
}
else{
    // multipication
    int res[m][q];
   for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            // i row of a and j column of b
            res[i][j] = 0; 
            for(int k=0;k<n;k++){
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
   // printf output
   printf("The resultant matrix is : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
}
    return 0;
}