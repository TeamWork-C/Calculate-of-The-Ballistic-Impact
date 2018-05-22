#include <stdio.h>
#include "./lib/f_lib.h"

double V0;
int angle;

int main()
{
    printf("Calculate of The Ballistic Impact\n");
    printf("    /V0\n");
    printf("   /\n");
    printf("  / \n");
    printf(" / ·angle\n");
    printf("/————————————\n\n");


    printf("Please input the V0\n");
    scanf("%lf",&V0);
    printf("Please input the angle\n");
    scanf("%d",&angle);

    int x,y;
    printf("What do you want?\n1.Height and distance 2.time 3.both");
    scanf("%d", &x);
    if(x == 1 || x == 3)
    {
        printf("Do you need the data stream?\n1.Yes 2.No\n");
        scanf("%d",&y);
    }

    switch(x)
    {
        
    }
    return 0;
}