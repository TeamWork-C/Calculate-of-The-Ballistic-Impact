#include <stdio.h>/*this line states the library I am going to refer */
#include <math.h>
#include "Projectfine.h"



int a,wo;
double v;

int main()
{
    printf("If you want the result of the height and distance, please input a 1\n");
    printf("___________________________________\n");
    printf("If you want to see the corresponding points of the parabola please press 2\n ");
    printf("___________________________________\n");
    printf("Your choice is:\n ");
    scanf("%d",&wo);
    printf("Enter v & Angle");
    
    scanf("%lf",&v);
    
    scanf("%d",&a);
    
    
    if(wo==1){
        fine(a,v);
    }
    else{
        how(a,v);
    }
    


    return 0;
}
