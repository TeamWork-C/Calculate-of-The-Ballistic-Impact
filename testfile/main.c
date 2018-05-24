#include "Projectfine.h"
#include "stdafx.h"

int wo;
double a;
double V;

int main()
{
    printf("If you want the result of the height and distance, please input 1\n");
    printf("___________________________________\n");
    printf("If you want to see the corresponding points of the parabola please press 2\n ");
    printf("___________________________________\n");
    printf("Your choice is: ");
    scanf_s("%d",&wo);
    printf("\nEnter v & Angle\n");
    
    scanf_s("%lf",&V);
	scanf_s("%lf",&a);
    
    if(wo==1){
        fine(a,V);
    }
    else{
        how(a,V);
    }
    
    return 0;
}
