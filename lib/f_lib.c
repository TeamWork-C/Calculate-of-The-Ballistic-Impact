#include <stdio.h>
#include <math.h>
#include "f_lib.h"
#define pi 3.1415962
#define g 9.8



double height(double V0, int angle, int print, double t)
{
	double t_angle = (angle/180)*pi;
	switch(print)
	{
		case 1:
			return pow(V0*sin(t_angle),2)/(2*g);
			break;
		case 2:
			return V0*sin(t_angle)*t+0.5*g*pow(g,2);
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
			return V0*cos(t_angle)*t;
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