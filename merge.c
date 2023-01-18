#include<stdio.h>
void main()
{
int a[20],b[20],c[40],n1,n2,i,j,k,m;
printf("enter the limit of first arry:");
scanf("%d",&n1);
printf("enter the first arry element:");
for(i=0;i<n1;i++)
{
scanf("%d",&a[i]);
}
printf("enter the limit of second arry:");
scanf("%d",&n2);
printf("enter the second arry element:\n");
for(j=0;j<n2;j++)
{
scanf("%d",&b[j]);
}

i=0;j=0;k=0;
while(i<n1 && j<n2)
{
if(a[i]<b[j])
{
c[k]=a[i];
i++;
k++;
}
else if(b[j]<a[i])
{
c[k]=b[j];
k++;j++;
}
else
{
c[k]=b[i];
i++;j++;k++;
}
}
while(i<n1)
{
c[k]=a[i];
i++;
k++;
}
while(j<n2)
{
c[k]=b[j];
j++;
k++;
}
printf("the merged arry :\n");
for(i=0;i<k;i++)
{
printf("%d",c[i]);
}
}

