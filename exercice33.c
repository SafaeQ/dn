#include <stdio.h>

int main()
{
    const float pi = 3.14;
    float r,D,S,P;
    printf("donner le rayon r:\n");
    scanf("%f",&r);

    D=r*2;
    P=r*2*pi;
    S=r*r*pi;

    printf("diametre est :%f\n ",D);
    printf("peremitre est :%f\n ",P);
    printf("surface est :%f\n ",S);
    return 0;

}