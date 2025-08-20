#include <stdio.h>
#include <string.h>



typedef struct
{
    char bioinkName[20];
    float solutionVolume;
    float gelWeight;
    float photoInitWeight;
    float photoBlockWeight;
} bioink;

int main(void)
{
    //Need to create 
    printf("Enter the amount of stock solution in mL: ");
    bioink GelMA_95;
    strncpy(GelMA_95.bioinkName, "GELMA 95", sizeof(GelMA_95.bioinkName));
    scanf("%f%f%f", &GelMA_95.gelWeight,
                    &GelMA_95.photoBlockWeight,
                    &GelMA_95.photoInitWeight);
    printf("Your bioink is %s. It has a concentration of %f GelMA, %f PI, and %f PB.\n", 
    GelMA_95.bioinkName, GelMA_95.gelWeight, GelMA_95.photoInitWeight, GelMA_95.photoBlockWeight);

    bioink GelMA_95_New;
    /*
    printf("Enter the amount of desired solution in mL: ");
    float desiredSolnVolume, 
          desiredSolnGel,
          desiredSolnPhotoInit, 
          desiredSolnPhotoBlock;

    scanf("%f%f%f%f", &desiredSolnVolume,
                      &desiredSolnGel,
                      &desiredSolnPhotoInit,
                      &desiredSolnPhotoBlock);
    */



}