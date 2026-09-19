//program to display volume and surface area of a cylinder
/*
Author: Bildad Gachau
Registration number: BCS-03-0135/2026
Description: volume and surface area of a cylinder
Date: 19/09/2026
*/

#include <stdio.h>
int main(){
    float radius, height;
    float volume, surfaceArea;
    const float PI = 3.14159;

    // Prompt the user to enter radius and height
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    // Calculate volume
    volume = PI * radius * radius * height;

    surfaceArea = 2 * PI * radius * radius + 2 * PI * radius * height;

    // Display results
    printf("\nVolume = %.2f\n", volume);
    printf("Surface Area = %.2f\n", surfaceArea);

    return 0;
}
