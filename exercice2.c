#include <stdio.h>

int main ()
{
    int a,b;
    printf("enter a value: ");
    scanf("%d",&a);

    printf("enter a value:");
    scanf("%d",&b);

    printf("a+b=%d \n",a+b);
    printf("a-b=%d \n",a-b);
    printf("a/b=%f \n",(float) a/b);
    printf("a%%b=%d \n",a%b);

}