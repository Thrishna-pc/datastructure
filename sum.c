#include<stdio.h>
int main()
{
	int i,n,ary[50],sum=0;
	printf("Enter the size of array:");
	scanf("%d",&n);
	if (n>50)
	{
		printf("error!! out of the limit!!!:");
	}
	else
	{
		printf("Enter the value of array:");
		for(i=0;i<n;i++)
		{
			scanf("%d",&ary[i]);
		}
		for(i=0;i<n;i++)
		{
			sum=sum+ary[i];
		}
		printf("The sum of %d numbers are %d\n",n,sum);
	}
	return (0);
}
		
		
