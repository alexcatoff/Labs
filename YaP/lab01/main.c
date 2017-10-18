#include <stdio.h>
#include <math.h>
int main()
{
    double x,a,G,F,Y;

    printf("Введите x:");
    scanf("%lf", &x);
    printf("Введите a:");
    scanf("%lf", &a);
    G=(10*(-45*pow(a,2)+49*a*x+6*pow(x,2)))/(15*pow(a,2)+49*a*x+24*pow(x,2));
    printf("G=%f\n\n",G);

    printf("Введите x:");
    scanf("%lf", &x);
    printf("Введите a:");
    scanf("%lf", &a);
    F=tan(5*pow(a,2)+34*a*x+45*pow(x, 2));
    printf("F=%f\n\n",F);

    printf("Введите x:");
    scanf("%lf", &x);
    printf("Введите a:");
    scanf("%lf", &a);
    Y=-asin(7*pow(a,2)-a*x-8*pow(x,2));
    printf("Y=%f\n\n",Y);
    return 0;
}
