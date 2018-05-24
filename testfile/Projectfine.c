#include "Projectfine.h"
#include "stdafx.h"
#define pi 3.14159265359
#define g 9.8

void fine(double a, double V)
{
	double Vx, Vy, t, H, R;
  
	Vx = V*cos(a*pi/180);

	Vy = V*sin(a*pi/180);

	t = 2*Vy/g;
	printf("Time t = %lf\n",t);

	H = pow(Vy, 2)/(2 * g);
	printf("Hight H = %lf\n",H);

	R = pow(V, 2)*sin(a*2*pi/180)/g;

	printf("range R = %f\n",R);
}

void how(double a, double V)
{
    int i;
    double t,Vy,Vx,x,y;

    Vx = V*cos(a*pi/180);

    Vy = V*sin(a*pi/180);

    t = (2*Vy/g)/10;

    for(i=1; i<10; i++)
    {
        x=Vx*t*i;

        y=Vy*t*i-0.5*g*t*t*i*i;

        printf ("x %d = %lf, y %d = %lf\n",i,x,i,y);
    }
}