#include <stdio.h>/*this line states the library I am going to refer */
#include <math.h>
#include "Projectfine.h"
#define pi 3.14159265359
#define g 9.8

void fine(int a, double v)
{
  float vx,vy,t,g,H,R;/**/
  g=9.8;
  
  vx=v*cos(a*3.14159/180);

  vy=v*sin(a*3.14159/180);

  t=2*vy/g;
  printf("time t=%.3fs\n",t);



  H=vy*vy/(2*g);
  printf("hight H = %.3f\n",H);

  R=v*v*sin(a*2*3.14159/180)/g;

  printf("range R = %f\n",R);
}

void how(int a, double v)
{
    int i;
    double t,vy,vx,x,y;

    vx=v*cos(a*pi/180);

    vy=v*sin(a*pi/180);

    t=(2*vy/g)/10;

    for(i=1;i<10;i++)
    {

        x=vx*t*i;

        y=vy*t*i-0.5*g*t*t*i*i;

        printf ("x%d=%lf\n",i,x);
        printf ("y%d=%lf\n\n",i,y);
    }

}