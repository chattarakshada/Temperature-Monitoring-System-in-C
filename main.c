#include <stdio.h>

int main()
{
    float temperature;

    printf("Enter Temperature (Celsius): ");
    scanf("%f", &temperature);

    if (temperature < -273.15)
    {
        printf("Invalid Temperature\n");
    }
    else if (temperature > 40)
    {
        printf("High Temperature Alert!\n");
    }
    else if (temperature < 15)
    {
        printf("Low Temperature Alert!\n");
    }
    else
    {
        printf("Normal Temperature\n");
    }

    return 0;
}
