// Write a program that helps the user to compute trigonometric functions.
// The program:
//
// -Must ask the user for the desired angle in degrees.
// -Convert the degrees to radians, so it can be used in the trigonometric predefined functions.
// -Must show the different trigonometric functions of such angle: sine, cosine, tangent, secant, cosecant, cotangent.
//
// Made by Jim Holguín on October 3rd, 2018.

#include <stdio.h>
#include <math.h>

double x,xx=0;

// Sine.
double sine(double a)
{
    double s=0;
    s=sin(a);
    printf("\nSine:      %lf\n",s);
    return 0;
}
// Cosine.
double cosine(double a)
{
    double s=0;
    s=cos(a);
    printf("Cosine:    %lf\n",s);
    return 0;
}
// Tangent.
double tangent(double a)
{
    double s=0;
    s=tan(a);
    printf("Tangent:   %lf\n",s);
    return 0;
}
// Secant.
double secant(double a)
{
    double s=0;
    s=(1/cos(a));
    printf("Secant:    %lf\n",s);
    return 0;
}
// Cosecant.
double cosecant(double a)
{
    double s=0;
    s=(1/sin(a));
    printf("Cosecant:  %lf\n",s);
    return 0;
}
// Cotangent.
double cotangent(double a)
{
    double s=0;
    s=(1/tan(a));
    printf("Cotangent: %lf\n",s);
    return 0;
}

// --- --- MAIN FUNCTION --- ---

int main()
{
    printf("Give me the angle bud.\n");
    scanf("%lf", &x);

    // Transforming degrees to radians.
    xx=(x*0.0174533);

    // Calling all functions to print their corresponding results.
    sine(xx);
    cosine(xx);
    tangent(xx);
    secant(xx);
    cosecant(xx);
    cotangent(xx);
}