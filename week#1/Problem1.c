
#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int size,i,x,flag=0,cmp=0;
		scanf("%d",&size);
		int a[size];
		for(i=0;i<size;i++)
		{
			scanf("%d",&a[i]);
		}
		scanf("%d",&x);
		for(i=0;i<size;i++)
		{      cmp++;
			if(a[i]==x)
			{
				flag=i;
				break;
			}	
		}
		
		if(flag)
			printf("Present %d",cmp);
		else
			printf("Not Present %d",cmp);
	}
}
