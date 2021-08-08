#include<stdio.h>
int Ins(int A[], int len);
int Ins(int A[], int len)
{
	int i,j,temp;
	
	for(i=1; i<len; i++)
	{
		temp=A[i];
		j=i-1;
		
		while(j>=0 && A[j]>temp)
		{
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=temp;
	}
}

void main()
{
	int A[100];
	int i,len;
	
	printf("\nEnter Size of Array:\n");
	scanf("%d",&len);
	
	printf("\nEnter Values:\n");
	for(i=0; i<len; i++)
	{
		scanf("%d",&A[i]);
	}
	
	Ins(A,len);
	printf("\nSorted Array:\n");
	for(i=0; i<len; i++)
	{
		printf("%d\n",A[i]);
	}
}