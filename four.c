//Create arrays A, B of size 3, C of size 6, merge A and B into C. 
#include<stdio.h>
int main(){
    int a[3];
    int b[3];
    int c[6];
    int i;
      for(i=0; i<3; i++){
        printf("enter your values  %d of A:",i+1);
        scanf("%d",&a[i]);
    }
     for(i=0; i<3; i++){
        printf("enter your values %d of B:",i+1);
        scanf("%d",&b[i]);
    }
    printf("After merge value is..");
    for(i=0; i<3; i++){
        c[i]=a[i];
         
    }
    for(i=0; i<6; i++){
        c[i+3]=b[i];
    }
     for(i=0; i<=6; i++){
        printf(" \n enter your values  of C:   %d ",c[i]);
         
    }

     
}