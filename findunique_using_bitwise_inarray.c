#include<stdio.h>
int main(){
    int a[5]={2,4,7,4,7};
    int unique=0;
    for(int i=0;i<5;i++){
        unique=unique^a[i];
    }
    printf("%d",unique);
}