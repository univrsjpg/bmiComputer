#include "bmi.c"

int main ()
{
    double fInches;
    double fMeters = 0.0;
    double fPounds;
    double fKilo = 0.0; 

    //reads the necessary inputs from the user;
    printf("Input your height in inches: ");
    scanf("%lf", &fInches);
    printf("\nInput your weight in pounds: ");
    scanf("%lf", &fPounds);

    // calls the function to convert the height input to its equivalent value in meters;
    fMeters = convertInchesToMeters(&fInches, fMeters);

    // calls the function to convert the weight input to its equivalent value in kilograms;
    fKilo = convertPoundsToKg(&fPounds, fKilo); 

    // calls the function to compute for the BMI in kg/m2; and
    getBMI(&fMeters, &fKilo);

    // displays the BMI value.
    printf("\nBMI: %0.2lf", getBMI(&fMeters, &fKilo));

    return 0;
}
