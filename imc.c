#include <stdio.h>

float calculator(float masa, float altura);

int main(int ac, char **av){

    float alt;
    float mas;


    while(1){
    printf("\nPlease enter your height in meters: ");
    scanf("%f", &alt);

    printf("\nPlease eneter your weigth: ");
    scanf("%f", &mas);

    printf("\n\n");

    printf("Your IMC is %f.", calculator(mas, alt));

    char bool;
    printf("Exit? [y/n]");
    scanf("%c", &bool);

    if(bool == 'y') exit(0);
    }

    return 0;
}

float calculator(float masa, float altura){
    return (masa/(altura*altura));
}