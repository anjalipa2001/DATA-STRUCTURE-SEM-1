#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node
{
int data;
struct node *next;
};
struct node *top=NULL;
void main()
{
 int opt;
do
{
printf("enter your option\n 1.Push\n 2.Pop\n 3.Display\n 4.Exit\n");
scanf("%d",&opt);
switch(opt)
{
case 1:push();
	break;
case 2:pop();
	break;
case 3:display();
	break;
default :exit;
}
}
while(opt!=4);
}
void push()
{
struct node *new=NULL;
new=(struct node *)malloc(sizeof (struct node));
if(new==NULL)
printf("stack underflow \n");
else
{
printf("enter the data to be Inserted");
scanf("%d",&new->data);
new->next=top;
top=new;
}
}
void pop()
{
struct node *ptr;
if(top==NULL)
printf("stack underflow \n");
else
{
printf("The item to be popped: %d \n",top->data);
ptr=top;
top=top->next;
free(ptr);
}
}
void display()
{
struct node *prev;
prev=top;
if(top==NULL)
printf("stack undeflow \n");
else
while(prev!=NULL)
{
printf("the elements are:%d \n",prev->data);
prev=prev->next;
}
}


