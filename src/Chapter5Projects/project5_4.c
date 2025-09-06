/*
Write a program that asks the user to enter a wind speed (in knots), then displays the corre-
sponding description.
*/

#include <stdio.h>

int main(void)
{
    printf("Enter the wind speed: ");
    float windSpeed;
    scanf("%f", &windSpeed);
    
    printf("Wind description: ");

    if (windSpeed < 1) printf ("Calm\n");
    else if (windSpeed < 4) printf("Light Air\n");
    else if (windSpeed < 28) printf("Breeze\n");
    else if (windSpeed < 48) printf("Gale\n");
    else if (windSpeed < 64) printf("Storm\n");
    else printf("Hurricane\n");
    
    return 0;
}