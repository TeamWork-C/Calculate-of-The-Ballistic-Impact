#ifndef f_lib
#define f_lib
#endif

/*
Compute the max-distance and max-heightby using the initial-speed (V0) and the angle; while print=1, stream output enabled (it will keep output the data each time the ball move for 0.5s until height=<0)
*/
void hei_dis(double V0, int angle, int print);

double height(double V0, int angle, int print, double t);

double distance(double V0, int angle, int print, double t);

double time(double V0, int angle);