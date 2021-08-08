#include<stdio.h>
#include<conio.h>
void main()
{
int arr[10],even=0,odd=0,i;
clrscr();
printf("Enter the Array Values:\n");
for(i=0;i<10;i++)
{
scanf("%d",& arr[i]);
if(arr[i]%2==0)
even++;
else
odd++;
}
printf("\nTotal Even No: %d",even);
printf("\nTotal Odd No: %d",odd);
getch();
}