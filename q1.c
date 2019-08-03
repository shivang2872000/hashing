#include<stdio.h>
#include<stdlib.h>
struct node{
  int value;
  int key;
  struct node * next;
};
int main(){
  int n,i,j=0;
  printf("enter the number of
  inputs\n");
  scanf("%d",&n);
  struct node hashtable[n];
  printf("Enter the elements to be stored\n");
  int data,count=0;
  while(j<n){
    hashtable[j].next=NULL;
    j++;
  }
  j=0;
  while(j<n){
    hashtable[j].value=-1;
    j++;
  }
  for(i=0;i<n;i++){
    scanf("%d",&data);
    if(hashtable[data%n].value==-1){
    hashtable[data % n].value=data;
    hashtable[data % n].key=data % n;
    hashtable[data % n].next=NULL;
  }
  else{
    struct node * newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->value=data;
    newnode->next=NULL;
    hashtable[data % n].next=newnode;
    count++;
  }

  }
  printf("number of collisions are\n%d",count);
  return 0;
}
