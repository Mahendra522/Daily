#include <stdio.h>
#include <stdlib.h>


struct Node{
  int info;
  struct Node* link;
};

struct Node* START=NULL;

struct Node* createNode(){
  struct Node* newNode;
  newNode = (struct Node*)malloc(sizeof(struct Node));
  printf("Enter number to be inserted: ");
  scanf("%d",&newNode->info);
  newNode->link=NULL;
  return newNode;
}

void insertNodeEnd(){

struct Node* newNode,*temp;
temp  = START;
newNode = createNode();
if(START == NULL)
  START = newNode;
else{
  while(temp->link!=NULL){
    temp = temp->link;
  }
  temp->link = newNode;
}

}

void insertNodeBeg(){
  struct Node* newNode;
  newNode=createNode();
  if(START == NULL)
    START = newNode;
  else{
    newNode->link = START;
    START = newNode;
  }
}

void insertNodeMiddle(int pos){
  struct Node* newNode,*temp;
  temp = START;
  newNode = createNode();
  if(pos!=1)
  {
    for(int i=1; i<=pos-2; i++){
      temp = temp->link;
    }
    newNode->link = temp->link;
    temp->link = newNode;
  }
  else{
    newNode->link =START;
    START = newNode; 
  }

}

int deleteNodeBeg(){
  int valueDeleted =0;
  if(START == NULL){
    printf("LinkedList is Empty\n");
    return 0;
  }

  valueDeleted = START->info;
  START = START->link;
  return valueDeleted;
}

int deleteNodeEnd(){
  int valueDeleted =0;
  if(START == NULL){
    printf("LinkedList is Empty\n");
    return 0;
  }

  struct Node* temp;
  temp = START;
  while(temp->link->link!=NULL){
    temp = temp->link;
  }
  valueDeleted = temp->link->info;
  temp->link=NULL;
  return valueDeleted;
}

int deleteNodeMiddle(int pos)
{
  int valueDeleted =0;
  if(START == NULL){
    printf("LinkedList is Empty\n");
    return 0;
  }
  struct Node* temp,*prev;
  temp = START;
  prev = START;
  if(pos!=1)
  {
    for(int i=1; i<=pos-1;i++){ //3
      temp = temp->link;
    }
    for(int i=1; i<=pos-2;i++){
    prev = prev->link;
    }
    valueDeleted = temp->info;
    prev->link = temp->link;
    return valueDeleted;
  }
  else{
    valueDeleted = START->info;
    START = START->link;
    return valueDeleted;
  }
}

void printList(){
  if(START == NULL){
    printf("LinkedList is Empty\n");
  }
  else{
    struct Node* temp;
    temp = START;
    while(temp!=NULL){
      printf("%d",temp->info);
      temp = temp->link;
    }
    printf("\n\n");
  }
  
}

int main(){
  while(5){
    int ch,num;
    printf("1. Insert a Number\n");
    printf("2. Delete a Number\n");
    printf("3. Print entire List\n");
 
    scanf("%d",&ch);

    switch(ch){
      case 1:
        insertNodeEnd();
        break;
      case 2:
        num = deleteNodeEnd();
        printf("%d deleted\n",num);
        break;
      case 3:
        printList();
        break;
      default: printf("Invaid Entry\n");
    }
  }

  return 0;
}
