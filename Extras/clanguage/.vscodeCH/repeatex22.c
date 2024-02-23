#include <stdio.h>
int main()
{
    float kmsToMiles = 0.621371;
    float inchesTofoot = 0.0833333;
    float cmsToinches = 0.393701;
    float poundTokgs = 0.453592;
    float inchesTometer = 0.0254;
    int conversion;
    float first, result1, result2, result3, result4, result5;

    printf("Enter the conversion you want\n 1.kmsToMiles\n 2.inchesTofoot\n 3.cmsToinches\n 4.poundTokgs\n 5.inchesTometer\n");
    scanf("%d", &conversion);

    switch (conversion)
    {
    case 1:
        printf("Enter the distance in kms\n");
        scanf("%f", &first);
        result1 = first * kmsToMiles;
        printf("The distance in Miles is %.2fmiles\n", result1);
        break;

    case 2:
        printf("Enter the length in inches\n");
        scanf("%f", &first);
        result2 = first * inchesTofoot;
        printf("The length in foot is %.2f", result2);
        break;

    case 3:
        printf("Enter the length in centimeter\n");
        scanf("%f", &first);
        result3 = first * cmsToinches;
        printf("The length in inches is %.2f", result3);
        break;

    case 4:
        printf("Enter weight in pounds\n");
        scanf("%f", &first);
        result4 = first * poundTokgs;
        printf("The weight in kg is %.2f", result4);
        break;

    case 5:
        printf("Enter the length in inches\n");
        scanf("%f", &first);
        result5 = first * inchesTofoot;
        printf("The length in foot is %.2f", result5);
        break;

    default:
        printf("You have entered the wrong input\n");
    }

    return 0;
}