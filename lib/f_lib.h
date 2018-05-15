#ifndef f_lib
#define f_lib
#endif  f_lib

/*
You should use this function to define the gravity acceleration (g = 9.8 by default)
!! You should use this function before using any other functions which defined in this header !!
*/
void G(double g);

/*
Compute the distance by using the initial-speed (V0) and the angle; while print=1, data output enabled (print=0 by default)
*/
double distance(double V0, int angle, int print);

/*
Compute the time of flight
*/
double time(double V0, int angle);

/*
Compute the max-height by using the initial-speed (V0) and the angle; while print=1, data output enabled (print=0 by default)(it will keep output the data until height=0)
*/
double height(double V0, int angle, int print);