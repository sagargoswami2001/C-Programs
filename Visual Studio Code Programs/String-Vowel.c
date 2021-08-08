//Program to find the total number of vowels and consonants.
#include<stdio.h>
void main()
{
    int i,v=0,c=0;
    char name[20];
    printf("\nEnter Your Name:\n");
    gets(name);
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||
           name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U')
        v++;
        else
        c++;
    }
    printf("\nVowels : %d and Consonant : %d\n",v,c);
}
