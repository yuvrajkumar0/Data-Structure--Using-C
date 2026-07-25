// Insert an element into the array at user defined position. 
#include<stdio.h>
int main(){
    int arr[10];
    int i,pos,value,n;
    printf("enter number of element: ");
    scanf("%d",&n);
    printf("enter the %d elements: \n ",n);
    for(i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    printf("enter position to insert: ");
    scanf("%d",&pos);

    printf("enter values to insert: ");
    scanf("%d",&value);
    for(i=n; i>=pos; i--){
        arr[i] = arr[i-1];
        arr[pos - 1] = value;
        n++;
    }
        printf("array after insertion ");
        for(i=0; i<n; i++){
            printf("%d",arr[i]);
        }
            return 0;
    }

