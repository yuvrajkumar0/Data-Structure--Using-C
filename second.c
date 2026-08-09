 #include<stdio.h>
int main(){
    int a[10];
    int sum = 0;
    for(int i=0; i<10; i++){
        printf("enter your %d values ",i+1);
        scanf("%d",&a[i]);
        
    }
    for(int i=0; i<10; i++){
        sum = sum +a[i];
    }
    printf("your sum is: %d ",sum);
     
}