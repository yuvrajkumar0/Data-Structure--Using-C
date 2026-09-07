#include<stdio.h>
void main(){
int a[3][3],b[3][3],c[3][3],i,j,k;
printf("enter a value of matrix of A");
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        printf("enter the value of [%d] [%d] : ",i,j);
        scanf("%d",&a[i][j]);
    }
}
printf("enter a value of matrix of B");
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        printf("enter the value of [%d][%d] : ",i,j);
        scanf("%d",&b[i][j]);
    }
}
for(i=0; i<3; i++){
    for(j=0; j<3; j++){
        c[i][j]=0;
        for(k=0; k<3; k++){
            c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
        }
    }
}
printf("\n A of matrix A\n");

for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
         printf("%5d",c[i][j]);
    }
    printf("\n");
}
printf("matrix B");
for(i=0; i<3; i++){

}
}
