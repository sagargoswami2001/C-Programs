#include "stdio.h"
int main()
{
    FILE *fp;
    char c[1024];
    fp = fopen("Sagar.txt", "r");
    c[0] = getc(fp);
    fseek(fp, 0, SEEK_END);
    fseek(fp, -7L, SEEK_CUR);
    fgets(c, 6, fp);
    puts(c);
    return 0;
}
