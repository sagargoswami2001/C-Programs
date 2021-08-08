/* 1.Create a function sort which takes two parameters (An array and lenght of the array) and print the sorted
values in main functions.
2.Pass the same sorted array in to another functions for searching and should pass three parameters 
(array, lenght, searched value) and print whether the searched value is in the array of not. */
#include<stdio.h>
void sort(int a[],int l)
{
int i,j,temp;
for(i=0; i<l; i++)
{
for(j=i+1; j<l; j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
}
int  search(int b[],int l,int val)
{
int lb,ub,mid;
lb=0;
ub=l;
mid=(lb+ub)/2;
while(lb<=ub)
{
if(b[mid]==val)
return 1;
else if(b[mid]>val)
ub=mid-1;
else if(b[mid]<val)
lb=mid+1;
mid=(lb+ub)/2;
}
if(lb>ub)
return 0;
}

void main()
{
int arr[10];
int len,i,value,rs;
printf("\nEnter the length of the array:\n");
scanf("%d",&len);
printf("\nEnter array values:\n");
for( i=0; i<len; i++)
{
scanf("%d",&arr[i]);
}
sort(arr,len);
printf("The sorted array is...\n");
for(int i; i<len; i++)
{
printf("a[%d]=%d\n",i,arr[i]);
}
printf("\nEnter the value you want to search in the array:\n");
scanf("%d",&value);
rs=search(arr,len,value);
if(rs==1)
{
printf("The searched value is found in the array...\n");
}
else
{
printf("Not found...");
}
}