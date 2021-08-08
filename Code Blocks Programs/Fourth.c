//WAP To Find Simple Interest.
//Formula SI=(P*R*T)/100.
//SI-> Simple Interest.
//P-> Principal.
//R-> Rate of Interest.
//T-> Time.
#include<stdio.h>
void main()
{
    int p,t;
    float r,si;
    printf("Enter The Value of P=");
    scanf("%d",&p);
    printf("Enter The Value of T=");
    scanf("%d",&t);
    printf("Enter The Value of R=");
    scanf("%f",&r);
    si=(p*r*t)/100;
    printf("Simple Interest is=%f\n",si);

}
