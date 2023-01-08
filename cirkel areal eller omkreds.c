//
// Created by emilt on 21-09-2022.
//

#include <stdio.h>
#include <math.h>

double areal (double radius)
{
    return radius*radius*M_PI;
}
double omkreds (double radius)
{
    return radius*2*M_PI;
}

int main (void)
{
    char A_or_O;
    double radius;
    double answer;

    printf("please state the radius: ");
    scanf("%lf",&radius);

    printf("state whether you want to calculate circumference or area: ");
    scanf(" %c",&A_or_O);

    if (A_or_O=='c')
    {
        answer= omkreds(radius);
    }

    else if (A_or_O=='a')
    {
        answer= areal(radius);
    }

    printf("the %c of %lf is %lf",A_or_O,radius,answer);
    return 0;
}