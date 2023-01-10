#include<stdio.h>
#include<stdlib.h>
void insertb();
void inserte();
void insertm();
void delb();
void dele();
void delm();
void display();
struct node
{
int data;
struct node *prev;
struct node *next;
};
struct node *head=NULL,*ptr=NULL,*new=NULL,*temp=NULL;
void main()
{
int n,i,opt;
printf("Enter the number of nodes to be created : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
new=(struct node*)malloc(sizeof(struct node));
printf("Enter the data to be inserted :  ");
scanf("%d",&new->data);
new->prev=NULL;
new->next=NULL;
if(head==NULL)
{
head=new;
}
else
{
ptr=head;
while(ptr->next!=NULL)
{
ptr=ptr->next;
}
ptr->next=new;
new->prev=ptr;
}
}
do
{
printf("\n Enter your choice: \n 1.Insert at the Beginning\n 2.Insert at end\n 3.Insert at Middle\n 4.Delete at the Beginning\n 5.Delete at the end\n 6.Delete at the middle\n 7.Display\n 8.exit\n");
scanf("\n %d",&opt);
switch(opt)
{
case 1:insertb();
       break;
case 2:inserte();
       break;
case 3:insertm();
       break;
case 4:delb();
       break;
case 5:dele();
       break;
case 6:delm();
       break;
case 7:display();
       break;
case 8:printf("exit");
       break;
default:printf("invalid");
}
}
while(opt!=8);
}
void insertb()
{
new=(struct node*)malloc(sizeof(struct node));
printf("\n Enter the data to be inserted at the Beginning : ");  
scanf("\n %d",&new->data);
new->next=NULL;
new->prev=NULL;
new->next=head;
head=new;
}
void inserte()
{
new=(struct node*)malloc(sizeof(struct node));
printf("\n Enter the data to be inserted at the End : ");
scanf("%d",&new->data);
new->next=NULL;
new->prev=NULL;
if(head==NULL)
{
head=new;
}
else
{
ptr=head;
while(ptr->next!=NULL)
{
ptr=ptr->next;
}
new->prev=ptr;
ptr->next=new;
}
}
void insertm()
{
int key;
printf("Enter the key value : ");
scanf("%d",&key);
new=(struct node*)malloc(sizeof(struct node));
printf("\n Enter the new data to be inserted : ");
scanf("%d",&new->data);
new->next=NULL;
new->prev=NULL;
if(head==NULL)
head=new;
else
{
ptr=head;
while(ptr->next!=NULL && ptr->data!=key)
{
ptr=ptr->next;
}
}
if(ptr->next==NULL)
{
ptr->next=new;
new->next=ptr;
}
else
{
 temp=ptr->next;
 new->next=temp;
 new->prev=ptr;
 ptr->next=new;
 temp->prev=new;
}
}
void display()
{
printf("List is ");
ptr=head;
while(ptr!=NULL)
{
printf("%d",ptr->data);
ptr=ptr->next;
}
}
void delb()
{
if(head->next!=NULL)
{
printf("\n %d is deleted",head->data);
head=head->next;
}
}
void dele()
{
ptr=head;
while(ptr->next!=NULL)
{
ptr=ptr->next;
}
if(ptr->next==NULL)
{
temp=ptr->prev;
temp->next=NULL;
ptr->prev=NULL;
printf("\n %d is deleted",ptr->data);
}
}
void delm()
{
int key;
printf("Enter the key to be deleted : ");
scanf("%d",&key);
if(head->data==key)
{
head=head->next;
}
temp=head;
ptr=head->next;
while(ptr!=NULL)
{
if(ptr->data==key)
{
temp->next=ptr->next;
temp->prev=ptr->prev;
free(ptr);
printf("\n %d is deleted",key);
}
else
{
temp=ptr;
ptr=ptr->next;
}
}
}







