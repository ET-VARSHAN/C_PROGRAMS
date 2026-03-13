#include<stdio.h>
#include<stdlib.h>

typedef struct Compartment{
    int seats;
    struct Compartment *prev;
    struct Compartment *next;
}C;
C *head=NULL,*tail=NULL;
void addFront(int s){
    C *newnode=(C*)malloc(sizeof(C));
    newnode->seats=s;
    newnode->prev=NULL;
    newnode->next=head;
    if(head==NULL){
        head=tail=newnode;
    }
    else{
        head->prev=newnode;
        head=newnode;
    }
}
void addEnd(int s){
    C *newnode=(C*)malloc(sizeof(C));
    newnode->seats=s;
    newnode->next=NULL;
    newnode->prev=tail;
    if(tail==NULL){
        head=tail=newnode;
    }
    else{
        tail->next=newnode;
        tail=newnode;
    }
}
void removePos(int pos){
    if(head==NULL){
        printf("No Compartments\n");
        return;
    }
    C *temp=head;
    int i;
    if(pos==1){
        head=head->next;
        if(head!=NULL)
            head->prev=NULL;
        else
            tail=NULL;
        free(temp);
        return;
    }
    for(i=1;i<pos;i++){
        temp=temp->next;
        if(temp==NULL){
            printf("Invalid Position\n");
            return;
        }
    }
    if(temp==tail){
        tail=tail->prev;
        tail->next=NULL;
    }
    else{
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
    }
    free(temp);
}
void displayForward(){
    C *temp=head;
    printf("\nForward: ");
    while(temp!=NULL){
        printf("%d ",temp->seats);
        temp=temp->next;
        if(temp!=NULL){
        	printf("->");
		}
    }
}

void displayBackward(){
    C *temp=tail;
    printf("\nBackward:");
    while(temp!=NULL){
        printf("%d ",temp->seats);
        temp=temp->prev;
        if(temp!=NULL){
        	printf("->");
		}
    }
}
int main(){
    addFront(60);
    addEnd(72);
    addFront(55);
    addEnd(80);
    displayForward();
    displayBackward();
    printf("\npos:");
    int n;
    scanf("%d",&n);
    removePos(n);
    displayForward();
    displayBackward();
}
