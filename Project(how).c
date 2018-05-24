
#define pi 3.14159265359
#define g 9.8

void how()
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