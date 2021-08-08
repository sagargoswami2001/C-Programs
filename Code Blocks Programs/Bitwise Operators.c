#include<stdio.h>
void main()
{
    int a=12;
    int b=4;

    printf("Bitwise AND : %d",a&b);
    printf("\nBitwise OR : %d",a|b);
    printf("\nBitwise XOR : %d",a^b);
    printf("\nBitwise Complement : %d",~a);
    printf("\nBitwise Left Shifting : %d",a<<3);
    printf("\nBitwise Right Shifting : %d\n",a>>3);
}
