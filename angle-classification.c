#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int angle;
    int rotation=0;
    scanf("%d",&angle);
    if(angle>0 && angle%360==0)
    {
        rotation = 360;
    }
    else
    {
        rotation = angle - (360 * (angle/360));
    }
           if(rotation<90)
            {
                printf("Acute Angle");
            }
            else if(rotation == 90)
            {
                printf("Right Angle");
            }
            else if(rotation>90 && rotation<180)
            {
                printf("Obtuse Angle");
            }
            else if(rotation == 180)
            {
                printf("Straight Angle");
            }
            else if(rotation>180 && rotation<360)
            {
                printf("Reflex Angle");
            }
            else if(rotation == 360)
            {
                printf("Full Rotation");
            }
       
    return 0;
}
