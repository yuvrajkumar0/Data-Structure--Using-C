// Create an array of size 10, input values and display sum and average of all elements in the array. 
 
#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int i,sum = 0;
    float avg = 0;
    for(i=0; i<10; i++){
        sum=sum+arr[i];
       

    }
      printf(" sum = %d \n ",sum);
      for(i=0; i<10; i++){
        avg = sum/10;
      }
       printf("avg = % .2f \n ",avg);

    return 0; 
     
}