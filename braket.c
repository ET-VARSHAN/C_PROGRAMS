#include<stdio.h>
#include<stdlib.h>
struct node{
    char data;
    struct node *next;
};
struct node *top = NULL;
void push(char x){
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = top;
    top = newnode;
}
char pop(){
    if(top==NULL)
        return '\0';
    struct node *temp = top;
    char x = temp->data;
    top = top->next;
    free(temp);
    return x;
}
int main(){
    char str[] = "(){()}";
    int i;
    for(i=0; str[i]!='\0'; i++){
        if(str[i]=='(' || str[i]=='{' || str[i]=='['){
            push(str[i]);
        }
        else{
            char x = pop();
            if( (x=='(' && str[i]!=')') ||
                (x=='{' && str[i]!='}') ||
                (x=='[' && str[i]!=']') ){
                    printf("Not Balanced");
                    return 0;
            }
        }
    }
    if(top==NULL){
    	printf("balanced");
	}
    else{
    	printf("not balanced");
	}
}