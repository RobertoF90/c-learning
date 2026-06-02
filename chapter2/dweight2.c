#include <stdio.h>

int main(void)
{
int height, length, width, volume, weight;

int metricVolume;
int metricWeight;

printf("Enter height of box: ");
scanf("%d", &height);
printf("Enter length of box: ");
scanf("%d", &length);
printf("Enter width of box: ");
scanf("%d", &width);


volume = height * length * width;
metricVolume = volume * 2.54;
weight = (volume + 165) / 166;
metricWeight = weight * 0.4535924;

printf("Dimensions: %dx%dx%d\n", length, width, height);
printf("Volume (cubic inches): %d\n", volume);
printf("Volume (cubic centimeters): %d\n", metricVolume);
printf("Dimensional weight (pounds): %d\n", weight);
printf("Dimensional weight (kg): %d\n", metricWeight);

return 0;

}
