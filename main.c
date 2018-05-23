#include <stdio.h>
#include "./lib/f_lib.h"

double V0;
int angle;

void hei_dis(double V0, int angle, int print);

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

    int x,print;
    printf("What do you want?\n1.Height and distance 2.time 3.both");
    scanf("%d", &x);
    if(x == 1 || x == 3)
    {
        printf("Do you need the data stream?\n1.Yes 2.No\n");
        scanf("%d",&print);
    }

    hei_dis(V0, angle, print);

    return 0;
}

void hei_dis(double V0, int angle, int print)
{
	switch(print)
	{
		case 1:
			double hei = height(V0, angle, print, 0);
			double dis = distance(V0, angle, print, 0);
			printf("The max_height is %lf meter(s)\n", hei);
			printf("The max_distance is %lf meter(s)\n", dis);
			break;
		case 2:
			double max_t = time(V0, angle);
			unsigned double height;
			double distance;
			for(float t = 0.25;t <= max_t; t = t + 0.25)
			{
				height = height(V0, angle, print, t);
				distance = distance(V0, angle, print, t);
			}
			break;
		default:
			printf("No valid choice!\nNow quit...");
	}
}