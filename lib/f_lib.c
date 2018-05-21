#include <math.h>
#include "f_lib.h"

double g = 9.8;

void hei_dis(double V0, int angle, int print)
{
	double m_height;
	double m_distance;

	if(print == 1)
		{
			for( ; ; )
				{
					
				}
		}
	
}

void time(double V0, int angle)
{
	double time = (2*V0*sin(angle))/g;;
	printf("The flight time is %lf\n", &time);
}