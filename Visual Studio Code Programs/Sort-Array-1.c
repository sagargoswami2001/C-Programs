#include<stdio.h>

void sort(int arr[], int l);

void main()
{
	int arr[10];
	int i; 
	
	printf("\nEnter 10 elements : \n");
	for(i=0; i<10; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	sort(arr,10);
	
	printf("\nSorted array : \n");
	for(i=0; i<10; i++)
	{
		printf("%d\n",arr[i]);
	}
}

void sort(int arr[], int l)
{
	int i,pass,swap;
	
	for(pass=0; pass<l-1; pass++)
	{
		for(i=0; i<l-1-pass; i++)
		{
			if(arr[i]>arr[i+1])
			{
				swap=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=swap;
			}
		}
	}
}