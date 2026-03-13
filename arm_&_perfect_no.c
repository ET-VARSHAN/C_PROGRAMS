#include<stdio.h>
#include<math.h>
int isarmstrong(int n){
    int original=n,sum=0,digit,count=0;
    int temp=n;
    while(temp!=0){
        count++;
        temp/=10;
    }
    temp=n;
    while(temp!=0){
        digit=temp%10;
        sum=sum+pow(digit,count);
        temp/=10;
    }
    return(original==sum);
}

int isperfect(int n){
    int sum=0,i;
    for(i=1;i<=n/2;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    return(sum==n);
} 
int main(){
    int num;
    printf("enter num:");
    scanf("%d",&num);
    if(isarmstrong(num)){
        printf("arm\n");
    }
    else{
        printf("not a arm\n");
    }
    if(isperfect(num)){
        printf("perfect");
    }
    else{
        printf("not a perfect");
    }
}
