#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}n;
n *create(){
    int c;
    n *head=NULL,*temp,*newnode;
    printf("size:");
    scanf("%d",&c);
    for(int i=0;i<c;i++){
        newnode=(struct node *)malloc(sizeof(n));
        printf("data:");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
    }return head;
}
void print(n *head){
    n *temp=head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
        if(temp!=NULL){
            printf("->");
        }
    }printf("\n");
}
n *big(n *head){
    n *newnode;
    newnode=(struct node *)malloc(sizeof(n));
    printf("first:");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
    return head;
}
n *end(n *head){
    n *temp,*newnode;
    temp=head;
    newnode=(struct node *)malloc(sizeof(n));
    printf("end:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    return head;
}
n *rev(n *head){
    n *pre,*nex,*cur;
    pre=NULL;
    cur=nex=head;
    while(nex!=NULL){
        nex=nex->next;
        cur->next=pre;
        pre=cur;
        cur=nex;
    }
    head=pre;
    return head;
}
n *mid(n *head){
    int i=0,p;
    printf("pos:");
    scanf("%d",&p);
    n *newnode,*temp=head;
    newnode=(struct node *)malloc(sizeof(n));
    printf("data:");
    scanf("%d",&newnode->data);
    while(p>i+2){
        temp=temp->next;
        i++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    return head;
}
int main(){
    n *head=NULL;
    head=create();
    print(head);
    head=big(head);
    print(head);
    head=end(head);
    print(head);
    head=mid(head);
    print(head);
    head=rev(head);
    print(head);
}