#include<stdio.h>
int main(){
int var1=10;
int var2=20;
int var3=30;
int *arr[3]={&var1,&var2,&var3};
for(int i=0;i<3;i++){
    printf("value of var%d:%d\n",i+1,*arr[i]);
}
}