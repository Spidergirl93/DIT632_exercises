/**
 * I hope that you remember how to add fractions.
Usually, the result is simplified by dividing the numerator and denumerator by the greatest common divisor.
a) Write a function
int addFraction(int a, int c, int b, int d)
which prints the sum of a/c and b/d as a simplified fraction. Test your program also with negative values. The function
returns 1, if the operation succeeded, otherwise 0.
b) Write a function
int subFraction(int a, int c, int b, int d)
which prints the subtraction of a/c and b/d as a simplified fraction.
c) Write a function
int mulFraction(int a, int c, int b, int d)
which prints the multiplication of a/c and b/d as a simplified fraction.
 */



#include <stdio.h>
#include <stdlib.h>

float addFraction(int *a, int *c, int *b, int *d);

float subFraction(int *a, int *c, int *b, int *d);

float mulFraction(int *a, int *c, int *b, int *d);

int main(int argc, char *argv[]) {

    if (argc == 5)
    {
        int a = atoi(argv[1]);
        int c = atoi(argv[2]);
        int b = atoi(argv[3]);
        int d = atoi(argv[4]);

        if(b == 0 || d == 0)
        {
            return 0;
        }

        float subtraction = subFraction(&a, &c, &b ,&d);
        float addition = addFraction(&a, &c, &b ,&d);
        float multiplication = mulFraction(&a, &c, &b, &d);

        printf("Addition: %f \nSubtraction: %f \nMultiplication: %f", addition, subtraction, multiplication);

        return 1;

    } else
    {
        return 0;
    }

}

float mulFraction(int *a, int *c, int *b, int *d) {
    float *result = malloc(sizeof (float));
    *result = (*a / *b) * (*c / *d);
    return *result;
}

float subFraction(int *a, int *c, int *b, int *d) {
    float *result = malloc(sizeof (float));
    *result = (*a / *b) - (*c / *d);
    return *result;
}

float addFraction(int *a, int *c, int *b, int *d) {
    float *result = malloc(sizeof (float));
    *result = (*a / *b) + (*c / *d);
    return *result;
}
