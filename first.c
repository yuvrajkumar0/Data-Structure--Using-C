#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int i,search,found = 0;;
    for(i=0; i<10; i++){
        printf(" \n %d",arr[i]);
    }
    printf("please enter your search value: ");
    scanf("%d",&search);
    
    for(i=0; i<10; i++){
        if(arr[i]==search){
            
        printf("your number %d is prestent in the arry:", search);
            found =1;
            break;
    }
}
 if(found == 0){
    printf("element %d not found in the arry \n",search);
 }
return 0;
}