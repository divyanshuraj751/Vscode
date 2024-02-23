#include <stdio.h>
int main()
{
    char input;
    float kmsToMiles = 0.621371;
    float inchesToFoot = 0.083333;
    float cmsToInches = 0.393701;
    float poundToKgs = 0.453592;
    float inchesToMeters = 0.0254;
    float first, second;

    while (1)
    {
        printf("Enter the input character.q to quit\n 1. kms to miles\n 2. inches to foot\n  3. cms to inches\n 4. pound to kgs\n 5. inches to meters\n");
        scanf(" %c", &input);

        switch (input)
        {
        case 'q':
            printf("Quitting the program..");
            goto end;
            break;

        case '1':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * kmsToMiles;
            printf("%.2f kilometer is equal to %.2f Miles\n\n\n", first, second);
            break;

        case '2':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * inchesToFoot;
            printf("%f inches is equal to %f foot\n", first, second);
            break;

        case '3':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * cmsToInches;
            printf("%f centimeter is equal to %f inches n", first, second);
            break;

        case '4':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * poundToKgs;
            printf("%f pound is equal to %f kilogram\n", first, second);
            break;

        case '5':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * inchesToMeters;
            printf("%f inches is equal to %f meters\n", first, second);
            break;

        default:
        printf("In default now");
            break;
        }
    }
end:
    return 0;
}