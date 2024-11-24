#include<stdio.h>

int main(){

    int therm;
    float F;
    printf("Give therm: ");
    scanf("%d",&therm);

    F=((9*therm)/5)+32;

    printf("The temp is: %f", F);
}