#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int n=5;
    ptr=(int*)malloc(4*5);
    printf("Enter %d number: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",ptr+i);
    }
    printf("Stored values: ");
    for(int i=0;i<n;i++){
        printf("%d",ptr+i);
    }
}