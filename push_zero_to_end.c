#include<stdio.h>
int main(){
    int a[]={0,6,0,0,1,0,2};
    int j=6;
    for(int i=0;i<7;i++){
        if(a[i]!=0){
            printf("%d",a[i]);
            j--;
        }
    }
    while(j>=0){
        printf("%d",0);
        j--;
    }
}
