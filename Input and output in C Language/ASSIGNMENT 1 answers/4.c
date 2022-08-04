#include<stdio.h>
#define PI 3.141
int main()
{
    float r,a;
    printf("Enter radius of a circle: ",r);
    scanf("%f",&r);
    a=PI*r*r;
    printf("/nArea of circle is %.4f having the radius %f",a,r);
    return 0;
}
