#ifndef f_lib
#define f_lib
#endif  f_lib

/*
Compute the distance by using the initial-speed (V0) and the angle; while print=1, data output enabled (it will keep output the data until height=0)
*/
double distance(double V0, int angle, int print);

/*
Compute the time of flight
*/
double time(double V0, int angle);

/*
Compute the max-height by using the initial-speed (V0) and the angle; while print=1, data output enabled (it will keep output the data until height=0)
*/
double height(double V0, int angle, int print);