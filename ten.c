#include<stdio.h>
int main(){
    int a[3][3];
    
    int b[3][3];
    int c[3][3]={0};
    int i;

    
    printf("enter the matrix of  A: ");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
         scanf("%d",&a[i][j]);
        }
    }
     printf("enter the matrix of B: ");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
         scanf("%d",&b[i][j]);
        }
    }

    for(i=0; i<3; i++){
        for(int j=0; j<3; j++){
            for(int k = 0; k<3; k++){
           c[i][j] = c[i][j] + a[i][k] * b[k][j];
        }
    }
     
}
printf("multiplication lof matrices : \n ");

for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        printf("%d", c[i][j]);
        
    }
     printf("\n");
   
}
  return 0;
}