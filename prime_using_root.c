#include<stdio.h>
#include<math.h>
int main(){
    int i,n,limit,isprime=1;
    printf("enter:");
    scanf("%d",&n);
    if(n<=1){
        isprime=0;
    }
    else{
        limit=sqrt(n);
        for(i=2;i<=limit;i++){
            if(n%i==0){
                isprime=0;
                break;
            }
        }
    }
    if(isprime){
        printf("prime");
    }
    else{
        printf("not a prime");
    }
}
