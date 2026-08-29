#include<stdio.h>
int main(){
    char ch[]={"chefSayshi"};
    int upper=0;
    int lower = 0;
    for(int i=0; ch[i] !='\0'; i++){
        if(ch[i]>='A'  && ch[i]<='Z'){
            upper++;
        }
            else if(ch[i]>='a' && ch[i]<='z'){
                lower++;
            }
        
    }
    printf("%d %d \n",upper,lower);
     

}