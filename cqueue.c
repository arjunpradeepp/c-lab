#include<stdio.h>
#include<stdlib.h>
int n,choice,queue[50],front=-1,rear=-1,item,x;
void display(),enqueue(),dequeue(),menu();
int main() {
    printf("Enter the no of elements:");
    scanf("%d",&n);
    menu();
    return 0;
}
void menu(){
    printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:enqueue();
            break;
        case 2:dequeue();
            break;
        case 3:display();
            break;
        case 4:exit(1);
    }
}
void enqueue(){
     if((front==rear+1)||(front==0 && rear==n-1))
     {
     printf("queue overflow");
     }
     else
     {
     if(front==-1)
     front=0;
     rear=(rear+1)%n;
     printf("enter the element: ");
     scanf("%d",&x);
     queue[rear]=x;
     printf("inserted element is %d",x);
     }
     menu();
     }
void dequeue(){
     if(front==-1)
     {
     printf("queue underflow");
     }
     else
     {
     x=queue[front];
     if(front==rear)
     {
     front=rear=-1;
     }
     else
     {
     front=(front+1)%n;
     }
     printf("deleted elemt is %d",x);
     }
     menu();
     }
void display(){
      int i;
      if(front==-1)
      {
      printf("queue is empty");
      }
      else
      {
      for(i=front;i!=rear;i=(i+1)%n)
      {
      printf("%d\t",queue[i]);
      }
      printf("%d\t",queue[i]);
      }
      menu();
      }
      
        
