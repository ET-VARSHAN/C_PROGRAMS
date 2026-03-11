#include<stdio.h>
int main(){
    int n;
    printf("size:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }
    int freq[5]={0};
    for(int i=0;i<n;i++){
        if(freq[i]==1){
            continue;
        }
        int count=1;
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count++;
                freq[j]=1;
            }
        }
        printf("%d has occured %d\n",a[i],count);
    }
}