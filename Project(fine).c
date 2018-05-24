void fine(int a, int wo, double v)
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