//Count words in a string.
#include<stdio.h>
int main()
{
    char str[30];
    int i,c=0;
    printf("Enter String : ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            c++;
        }
    }
    printf("\nTotal Number of Characters Are: %d", c+1);
    return 0;
}
