#include<stdio.h>
float add(float a,float b) {return a+b;}
float sub(float a,float b) {return a-b;}
float mul(float a,float b) {return a*b;}
float divi(float a,float b) {return a/b;}
int main(){
    float x,y,result;
    int choice;
    float(*op[4])(float,float)={add,sub,mul,divi};
    printf("2 no.:");
    scanf("%f %f",&x,&y);
    printf("0->'+'");
    printf("\n1->'-'");
    printf("\n2->'*'");
    printf("\n3->'/'");
    printf("\nenter:");
    scanf("%d",&choice);
    result=op[choice](x,y);
    printf("res:%.2f",result);
}