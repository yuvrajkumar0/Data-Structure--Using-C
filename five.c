//Create an array of size 10, find the largest value from the array. 
#include<stdio.h>
int main(){
    int a[10];
    int i,large;
   
    for(i=0; i<10; i++){
        printf("enter your values  %d of A:",i+1);
        scanf("%d",&a[i]);
    }
    large = a[0];
    //printf("your largest values is..");
    for(i=0; i<10; i++){
      if( a[i]>large){
        large = a[i];
      }
    }
    printf("largest value = %d",large);
    return 0;
      
}
     