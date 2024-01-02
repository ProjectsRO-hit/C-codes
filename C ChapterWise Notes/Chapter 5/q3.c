#include <stdio.h>
float foa(float m, float g){
    float calc;
    calc = m * g;
    return calc;
}

int main()
{
    float mass, gravitation = 9.8;
    printf("Please enter the mass of the body\n");
    scanf("%f", &mass);
    float force = foa(mass, gravitation);
    printf("The force of attraction would be : %.2f", force);
    return 0;
}