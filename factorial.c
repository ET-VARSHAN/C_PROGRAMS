#include <stdio.h>
int main(){
    int num;
    long fact;
    printf("Enter the number: ");
    scanf("%d",&num);
    facto(&num,&fact);
    printf("the factorial of %d is %d",num,fact);
}
void facto(int *num,long *result){
    *result=1;
    for(int i=0;i<=*num;i++){
        *result*=i;
    }
}