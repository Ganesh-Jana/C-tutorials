#include <stdio.h>

int main()
{
    int day, dayOfWeek;

    // Get input from user
    printf("Enter a day number (1-7): ");
    scanf("%d", &day);

    // Calculate the day of the week
    switch (day)
    {
        case 1:
            dayOfWeek = 1;
            break;
        case 2:
            dayOfWeek = 2;
            break;
        case 3:
            dayOfWeek = 3;
            break;
        case 4:
            dayOfWeek = 4;
            break;
        case 5:
            dayOfWeek = 5;
            break;
        case 6:
            dayOfWeek = 6;
            break;
        case 7:
            dayOfWeek = 0;
            break;
        default:
            printf("Invalid input!\n");
            return 0;
    }

    // Print the day of the week
    switch (dayOfWeek)
    {
        case 0:
            printf("Sunday\n");
            break;
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
    }

    return 0;
}