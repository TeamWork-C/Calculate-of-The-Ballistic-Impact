#include <stdio.h>
#include<math.h>
int main()
{
  float v,vx,vy,t;
  float x,y;
  int i;
  float a;
  printf("please input a and v:");
  scanf("%f%f",&a,&v);
  vx=v*cos(a*3.14159265359/180);
  vy=v*sin(a*3.14159265359/180);
  t=2*vy/9.8;
  printf("time t=%.3fs\n",t);
  for(i=1;i<=10;i++)
  {
    x=t*i/10*vx;
    y=vy*t*i/10-4.9*t*i/10*t*i/10;
    printf("x%d=%.3f    ",i,x);
    printf("y%d=%.3f\n",i,y);
  }
}
