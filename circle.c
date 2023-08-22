//circle

#include <stdio.h>
#define PI 3.14159
int main()
{
    float radious;
    printf("Enter the radius of the circle: ");
    scanf("%f",&radious);

    float area = PI*radious*radious;
    float circumference = 2* PI*radious;

    printf("The area of the rectangle is: %.2f\n", area);
    printf("The circumference of the rectangle is: %.2f\n", circumference);
}

