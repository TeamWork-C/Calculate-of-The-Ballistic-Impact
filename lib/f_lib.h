#ifndef f_lib
#define f_lib
#endif

/*
Compute the max-distance and max-heightby using the initial-speed (V0) and the angle; while print=1, stream output enabled (it will keep output the data until height=0)
*/
void hei_dis(double V0, int angle, int print);

/*
Compute the time of flight
*/
double time(double V0, int angle);