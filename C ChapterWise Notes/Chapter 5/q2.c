#include<stdio.h>
float conv(float x){
    float calc;
    calc = x * 9/5 + 32;
    return calc;
}

int main(){
    float temp_c;
    printf("Please enter the temprature in celcius\n");
    scanf("%f", &temp_c);
    float farenheit = conv(temp_c);
    printf("The temperature in farenheit is : %.2f °F", farenheit);
    return 0;
}