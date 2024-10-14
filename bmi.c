#include "bmi.h"

//function that accepts an inch value as parameter, and returns the equivalent value in meters;
double convertInchesToMeters(double *fInches, double fMeters)
{
    return fMeters = *fInches*0.0254; //1 inch = 0.025 m
}

//function that accepts as parameter the weight value in pounds, and returns the equivalent value in kilograms;
double convertPoundsToKg(double *fPounds, double fKilo)
{
    return fKilo = *fPounds*0.4536; //1 pound = approximately 0.45
}

//function that accepts as parameters height in meters, and weight value in kilograms, and returns the BMI value
double getBMI(double *fMeters, double *fKilo)
{
    return *fKilo/pow(*fMeters, 2);
}
