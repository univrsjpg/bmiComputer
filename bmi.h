#include <stdio.h>
#include <math.h>

//function that accepts an inch value as parameter, and returns the equivalent value in meters;
double convertInchesToMeters(double *fInches, double fMeters);

//function that accepts as parameter the weight value in pounds, and returns the equivalent value in kilograms;
double convertPoundsToKg(double *fPounds, double fKilo); 

//function that accepts as parameters height in meters, and weight value in kilograms, and returns the BMI value
double getBMI(double *fMeters, double *fKilo);
