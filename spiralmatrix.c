
#include<stdio.h>
int main(){
    int r,c,num=1;
    printf("enter row and col:");
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            a[i][j]=num++;
        }
    }
    printf("matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%3d",a[i][j]);
        }printf("\n");
    }
    printf("spiral matrix:");
    int top,left,bot,right;
    top=0;
    bot=r-1;
    left=0;
    right=c-1;
    while(top<=bot && left<=right){
        for(int i=left;i<=right;i++){
            printf("%d ",a[top][i]);
        }
        top++;
        for(int i=top;i<=bot;i++){
            printf("%d ",a[i][right]);
        }
        right--;
        if(top<=bot){
            for(int i=right;i>=left;i--){
            printf("%d ",a[bot][i]);
        }
        bot--;
        }
        if(left<=right){
            for(int i=bot;i>=top;i--){
            printf("%d ",a[i][left]);
        }
        left++;
        }
    }
}