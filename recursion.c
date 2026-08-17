#include<stdio.h>
void findMinMax(int arr[],int n, int index,int *min, int *max);
void main()
{
int arr[100],n,i;
int min;
int max;
printf("please enter your array size: ");
scanf("%d",&n);
printf("Enter %d element ",n);
for(int i=0; i<n; i++){
    scanf("%d",&arr[i]);
}
min = max = arr[0];
findMinMax(arr,n,1,&min,&max);
printf("minimum = %d \n",min);
printf("maximum = %d \n",max);

}
void findMinMax(int arr[], int n, int index, int *min, int *max)
{
    if(index==n)
    {
        return;
    }

    if(arr[index]< *min){
        *min = arr[index];

    }
    if(arr[index]>*max){
        *max=arr[index];
    }
    findMinMax(arr,n,index+1,min,max);

}
