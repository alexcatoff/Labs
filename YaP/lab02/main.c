#include <stdio.h>
#include <math.h>


main(void)
{
    double x, a, d, G, F, Y;
    int n;

    printf("Формула №1 G=(10*(-45*pow(a,2)+49*a*x+6*pow(x,2)))/(15*pow(a,2)+49*a*x+24*pow(x,2))\n");
    printf("Формула №2 F=tan(5*pow(a,2)+34*a*x+45*pow(x, 2))\n");
    printf("Формула №3 Y=-asin(7*pow(a,2)-a*x-8*pow(x,2))\n");
    printf("Выберите формулу для решения:");
    scanf("%d", &n);

    switch (n)
    {
        case 1:
            printf("Enter x:");
            scanf("%lf", &x);
            printf("Enter a:");
            scanf("%lf", &a);
            d = (15 * pow(a, 2) + 49 * a * x + 24 * pow(x, 2));
            if (d != 0) {
                G = (10 * (-45 * pow(a, 2) + 49 * a * x + 6 * pow(x, 2))) / (15 * pow(a, 2) + 49 * a * x + 24 * pow(x, 2));
                printf("G = %lf\n", G);
                }
            else printf("Выберите другие значения для x и a");

            break;

        case 2:
            printf("Enter x:");
            scanf("%lf", &x);
            printf("Enter a:");
            scanf("%lf", &a);
            F=tan(5*pow(a,2)+34*a*x+45*pow(x, 2));
            printf("F = %lf\n", F);
            break;
        case 3:
            printf("Enter x:");
            scanf("%lf", &x);
            printf("Enter a:");
            scanf("%lf", &a);
            Y=-asin(7*pow(a,2)-a*x-8*pow(x,2));
            printf("Y = %lf\n", Y);
            break;

        default:
            printf("Вы выбрали не существующий вариант");
    }
    return 0;
}