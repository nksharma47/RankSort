#include <stdio.h>

void rank_sort(int a[],int r[],int n)
{
    int i,u[10];
    for(i=0;i<n;i++)
    {
        u[r[i]]=a[i];
    }
    for(i=0;i<n;i++)
    {
        a[i]=u[i];
    }
}

void rank(int a[],int n)
{
    int r[10],i,j;
    for(i=0;i<n;i++)
        r[i]=0;
    
    for(i=1;i<n;i++)
    {
        for(j=i-1;j>=0;j--)
        {
            if(a[i]>=a[j])
                r[i]++;
            else
                r[j]++;
        }
    }
    rank_sort(a,r,n);
}

int main(void) 
{
	int a[10],i,n;
	printf("Enter Size of Array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	rank(a,n);
	
	printf("Sorted Array is:\n");
	for(i=0;i<n;i++)
	{
	    printf("%d ",a[i]);
	}
	return 0;
}

