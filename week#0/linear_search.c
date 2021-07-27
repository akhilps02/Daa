
#include<stdio.h>
void main()
{

int a[]={3,42,5,6,83,7,9,23,24,89};
int x,i,c=0;
printf("Enter element you want to search:");
scanf("%d",&x);
for(i=0;i<sizeof(a)/sizeof(int);i++)
{
if(a[i]==x)
	c=1;
}
if(c==1)
        printf("Element found");
else
        printf("Element not found");
}
