#include "stdafx.h"

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
    printf("/——————\n\n");


    printf("Please input the V0\n");
    scanf_s("%lf",&V0);
    printf("Please input the angle\n");
    scanf_s("%d",&angle);

    int x,print;
    printf("What do you want?\n1.Height and distance 2.time 3.both\n");
    scanf_s("%d", &x);
    if(x == 1 || x == 3)
    {
        printf("Do you need the data stream?\n1.Yes 2.No\n");
        scanf_s("%d",&print);
    	switch (x)
		{
		case 1:
			hei_dis(V0, angle, print);		
		case 3:
			hei_dis(V0, angle, print);
			printf("The flight time is %lf\n",time(V0, angle));
		}
	}
	if(x == 2)
	{
		printf("The flight time is %lf\n", time(V0, angle));
	}
	else
		printf("No valid choice!\nNow quit...");

    return 0;
}

void hei_dis(double V0, int angle, int print)
{
	double hei;
	double max_t;
	double dis;
	switch(print)
	{
		case 1:
			
			hei = height(V0, angle, print, 0);
			dis = distance(V0, angle, print, 0);
			printf("The max_height is %lf meter(s)\n", hei);
			printf("The max_distance is %lf meter(s)\n", dis);
		case 2:
			max_t= time(V0, angle);
			double t_hei;
			double t_dis;
			for(double t = 0.25;t <= max_t; t = t + 0.25)
			{
				t_hei = height(V0, angle, print, t);
				t_dis = distance(V0, angle, print, t);
				if (t_hei < 0)
					t_hei = t_hei * -1;
				printf("x = %lf meter(s), y = %lf meter(s)\n", t_hei, t_dis);
			}
		default:
			printf("No valid choice!\nNow quit...");
	}
}