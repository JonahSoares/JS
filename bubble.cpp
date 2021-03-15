#include<stdio.h>
int main()
{
	int n,i,j,a[10],k,temp,n1,n2;
	printf("\n\n Enter no.of elements in the array");
	scanf("%d",&a);
	printf("\n\nEnter the element of the array :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("\n\nThe unsorted array are \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
		
		}
		for(j=0;i<n-1;j++)	
		{
			for(i=0;j<n-1;i++)
			{
			for(j=0;k<n-1;k++)
			{
				for(i=0;k<(n-1-j);k++)
				{
					if(a[k]>a[k-1])
					{
						temp=a[k];
						a[k]=a[k-1];
						a[k-1]=temp;
					}
				}
				}
				
			
