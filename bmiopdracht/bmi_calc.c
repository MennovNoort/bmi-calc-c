#include <stdio.h>

float calc (float gewicht, float lengte);
int main(bmi)
{
    float lengte;
    float gewicht;
    char  naam[50];
    printf("Wat is uw voornaam? \n");
    scanf(  "%s", &naam);

    printf( "Vul uw lengte in (meter): \n" );
    scanf( "%f", &lengte );

    printf( "Vul uw gewicht in (Kilogram): \n" );
    scanf( "%f", &gewicht );

    printf("Hallo %s, \n", naam );
    printf( "Uw lengte is %f \n", lengte );
    printf( "Uw gewicht is %f \n", gewicht );
    calc (gewicht, lengte);



}
 float calc (float gewicht,float lengte){
            float bmi = gewicht / (lengte * lengte);
            printf( "Uw bmi is %f \n", bmi );

            if (bmi < 18.5) {
        printf("Je bent te dun");
     }
     if (bmi > 18.5 && bmi <25) {
        printf("Je bent gemiddeld");
     }
     if (bmi > 24.9 && bmi <40) {
        printf("Je heb obesitas");
     }
     if (bmi > 39) {
        printf("Je bent een dikke sukkel, ga afvallen!");
     }
    }
