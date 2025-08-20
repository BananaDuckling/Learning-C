#include <stdio.h>
#define RATIO (4.0f / 3.0f)
#define PI 3.14159f

int main()
{
    float volume, radius;
    
    printf("Enter the value of the radius: ");
    scanf("%f", &radius);

    volume = RATIO * PI * radius * radius * radius;

    printf("The volume is %.2f.\n", volume);

    return 0;
} 