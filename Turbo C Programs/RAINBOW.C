#include<graphics.h>
#include<dos.h>
void rainbow()
{
int gdriver=DETECT, gmode;
int x,y,i;
initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
x=getmaxx()/2;
y=getmaxy()/2;
for(i=30;i<200;i++)
{
delay(100);
setcolor(i/10);
arc(x,y,0,360,i-10);
}
}
int main()
{
rainbow();
return 0;
}