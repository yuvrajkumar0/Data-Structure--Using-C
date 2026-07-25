//. Create arrays A, B and C of size 3, perform C = A + B. 
#include<stdio.h>
int main(){
    int a[3];
    int b[3];
    int c[3];
    int i;
   
    for(i=0; i<3; i++){
        printf("enter your values  %d of A:",i+1);
        scanf("%d",&a[i]);
    }
     for(i=0; i<3; i++){
        printf("enter your values %d of B:",i+1);
        scanf("%d",&b[i]);
    }
     
    for(i=0; i<3; i++){
        c[i]=a[i]+b[i];
    }
    printf("sum of arrays:");
    for(i=0; i<3; i++){
        printf("%d \n",i+1,c[i]);
    }
    return 0;
}