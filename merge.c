#include<stdio.h>
void display_array(int arr[],int sze)
{
	printf("array elements are:");
	for(int i=0;i<sze;i++)
	{
		printf("%d ",arr[i]);
        } 
        printf("\n");
}
void sort(int arr[],int sze)
{
	int temp,i,j;
	for(i=0;i<sze;i++)
	{
		for(j=i+1;j<sze;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
void merge(int arr1[],int arr2[],int arr3[],int sze1,int sze2)
{
        int i,j;
	for(i=0;i<sze1;i++)
	{
		arr3[i]=arr1[i];
	}
	for(j=0;j<sze2;j++)
	{
		arr3[i]=arr2[j];
		i++;
	}
}
int main()
{
	int arr1[10],arr2[10],arr3[20],i,m,n,sze;
	printf("enter the size of first array:");
	scanf("%d",&n);
	if(n>=100)
	{
		printf("error out ofthe limit\n");
	}
	else
	{
		printf("enter the values for first array:");
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr1[i]);
        	}
       		display_array(arr1,n);    
        }
        printf("enter the size of second array:");
	scanf("%d",&m);
	if(m>=100)
	{
		printf("error out ofthe limit\n");
	}
	else
	{
		printf("enter the values for second array:");
		for(i=0;i<m;i++)
		{
			scanf("%d",&arr2[i]);
        	}
       		display_array(arr2,m);
       	}
      	printf("sorted first\n");
      	sort(arr1,n);
      	display_array(arr1,n);
      	printf("sorted second\n");
      	sort(arr2,m);
      	display_array(arr2,m);
      	sze=n+m;
      	printf("merged array\n");
      	merge(arr1,arr2,arr3,n,m);
        sort(arr3,sze);
        display_array(arr3,sze);
       
        return (0);                                                 
}
                                                            
