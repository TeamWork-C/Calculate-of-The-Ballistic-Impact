#include <stdio.h>
#include <math.h>
#include "f_lib.h"
#define pi 3.1415962
#define g 9.8

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
			for(float t = 0.25;t > max_t; t = t + 0.25)
			{
				++++
				
			}
			break;
		default:
			printf("No valid choice!\nNow quit...");
	}
}

double height(double V0, int angle, int print, double t)
{
	double t_angle = (angle/180)*pi;
	switch(print)
	{
		case 1:
			return pow(V0*sin(t_angle),2)/(2*g);
			break;
		case 2:
			
			break;
		default:
			return -1;
	}
}

double distance(double V0, int angle, int print, double t)
{
	double t_angle= (angle/180)*pi;
	switch(print)
	{
		case 1:
			
			return V0*cos(t_angle)*time(V0, angle);
			break;
		case 2:
			
			break;
		default:
			return -1;
	}
}

double time(double V0, int angle)
{
	double time = (2*V0*sin((angle/180)*pi)/g);;
	return time;
}