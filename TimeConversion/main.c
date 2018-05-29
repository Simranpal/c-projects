#include <stdio.h>
#include <stdlib.h>

int main()
{
    int minutesEntered = 0;
    printf("\nPlease enter the number of minutes : \n");
    scanf("%i",&minutesEntered);

    double minutesYear = minutesYear;

    double days = minutesYear/1440.0;
    double years = days/365.0;

    printf("\nConverting minutes to days and years..\n");
    printf("\n In years = %f\n", years);
    printf("\n In days  = %f\n", days);

    return 0;
}
