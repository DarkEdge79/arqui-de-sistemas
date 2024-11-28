#include <stdio.h>

float calculator(float masa, float altura);

int main(int ac, char **av){

    float alt;
    float mas;

    printf("\nPlease enter your height in meters: ");
    scanf("%f", &alt);

    printf("\nPlease eneter your weigth: ");
    scanf("%f", &mas);

    printf("\n\n");

    printf("Your IMC is %f.", calculator(mas, alt));

    return 0;
}

float calculator(float masa, float altura){
    return (masa/(altura*altura));
}