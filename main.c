#include <stdio.h>
#include <math.h>
#include "./lib/f_lib.h"

int angle,print;
double v0;

int main()
{
    printf("If you want the result of the height and distance, please input a 1. \n");
    printf("___________________________________\n");
    printf("If you want to see the corresponding points of the parabola please press 2\n ");
    printf("___________________________________\n");
    printf("Your choice is:\n ");
    scanf("%d",&print);
    printf("Enter v0 & Angle: \n");
    printf("%lf:\n",v0);
    sacnf("%lf",&v0);
    printf("%d:",angle);
    scanf("%d",&angle);
    

    hei_dis(v0,angle,print);

    time(v0,angle);


    return 0;
}
