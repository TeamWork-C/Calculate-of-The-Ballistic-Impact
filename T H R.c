#include <stdio.h>
#include<math.h>
int main()
{
  float v,vx,vy,t,g;
  float H,R;
  float a;
  if(g=9.8)
  printf("Please input angle and velocity:");
  scanf("%f%f",&a,&v);
  vx=v*cos(a*3.14159/180);
  vy=v*sin(a*3.14159/180);
  t=2*vy/g;
  printf("time t=%.3fs\n",t);
  H=vy*vy/2/g;
  printf("hight H=%.3f\n",H);
  R=v*v*sin(a*2*3.14159/180)/g;
  printf("range R=%.3fd\n",R);
}
