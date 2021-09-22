#include <stdio.h>

int insertionsort(int ar[], int n)
{
	int sps=0,cmp=0,value,j,i;
	for(i=1;i<n;i++)
	{
	    value=ar[i];
	    j=i;
	    cmp+=1;
	    while(j>0 && value<ar[j-1])
	    {
	        ar[j]=ar[j-1];
	        j=j-1;
	        cmp++;
	        sps+=1;
	    }
	    ar[j]=value;
	    
	}
	printf("shift=%d,comparison=%d",cmp,sps);
}
int main()
{
    int x,size,i;
    scanf("%d",&x);
    while(x--)
    {
    scanf("%d",&size);
	int ar[size];
	for(i=0;i<size;i++)
	{
	    scanf("%d",&ar[i]);
	}
	insertionsort(ar,size);
    }
	return 0;
}
