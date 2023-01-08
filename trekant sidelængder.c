//
// Created by emilt on 21-09-2022.
//

#include <stdio.h>
#include <math.h>

double distance_of_side (double xA, double yA, double  xB, double yB)
{
    return sqrt(pow(xA-xB, 2.0)+pow(yA-yB,2.0));
}

double circumference_triangle(double x1, double x2,double x3,
                              double y1,double y2, double y3)
{
    double side1, side2, side3;
    side1= distance_of_side(x1, y1, x2, y2);
    side2= distance_of_side(x2, y2, x3, y3);
    side3= distance_of_side(x3, y3, x1, y1);
    return side1+side2+side3;
}

int main (void)
{
    double x1,x2,x3,y1,y2,y3,total_length;

    printf("state the three sides: ");
    scanf("%lf %lf %lf",&side1,&side2,side3);
}