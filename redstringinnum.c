#include<stdio.h>
int main(){
    int count,i,j;
    char str[100];
    printf("string:");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
        count=1;
        if(str[i]==-1){
            continue;
        }
        for(j=i+1;str[j]!='\0';j++){
            if(str[i]==str[j]){
                count++;
                str[j]=-1;
            }
        }
        printf("%c%d",str[i],count);
    }
}