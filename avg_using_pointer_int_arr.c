#include<stdio.h>
int main(){
    int arr[]={10,20,30,40};
    int *p=arr,n=4,sum=0;
    for(int i=0;i<n;i++){
        sum+=*(p+i);
    }
    printf("avg=%.2f",(float)sum/n);
}
