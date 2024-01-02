#include <stdio.h>

int main()
{
    float pie = 3.14;
    float r, h;
    printf("Enter the radius of the circle\n");
    scanf("%f", &r);
    printf("The area of the circle is %f\n", pie * (r * r)); //Area of Circle is- Pie*R square
    printf("Enter the height of the Cylinder\n");
    scanf("%f", &h);
    printf("Volume of the Cylinder is %f\n", pie * (r * r) * h); // Volume of Cylinder is - pie*R square*H
    printf("Lateral Surface area is %f\n", 2 * pie * r * h); // Lateral Surface of Cylinder is - 2*pie*R*H
    return 0;
}