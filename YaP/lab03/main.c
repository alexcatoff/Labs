#include <stdio.h>
#include <math.h>


main()
{
    double a, x, d, G, F, Y, lim, v;
    int n, k, c;

    printf("Для запуска программы нажмите 1, для выхода - 2\n");
    scanf("%d", &c);

    while (c == 1) {
        printf("Введите x и a\n");
        scanf("%lf", &x);
        scanf("%lf", &a);
        printf("Введите количество шагов \n ");
        scanf("%d", &k);
        printf("Введите номер функции \n");
        scanf("%d", &n);
        lim = x + (k * 0.1);

        switch (n) {
            case 1:

                while (x < lim) {
                    x += 0.1;
                    d = (15 * pow(a, 2) + 49 * a * x + 24 * pow(x, 2));
                    if (d != 0) { //Сравнивание знаменателя с нулём (область определения)
                        G = (10 * (-45 * pow(a, 2) + 49 * a * x + 6 * pow(x, 2))) /
                            (15 * pow(a, 2) + 49 * a * x + 24 * pow(x, 2));
                        printf("G = %lf\n", G);
                    } else printf("Не входит в область определения\n");
                }
                break;

            case 2:
                while (x < lim) {
                    x += 0.1;
                    F = tan(5 * pow(a, 2) + 34 * a * x + 45 * pow(x, 2));
                    printf("F = %lf\n", F);
                }
                break;

            case 3:
                v = 7 * pow(a, 2) - a * x - 8 * pow(x, 2);
                while (x < lim) {
                    x += 0.1;

                    if ((v >= -1) && (v <= 1)) {
                        Y = -asin(7 * pow(a, 2) - a * x - 8 * pow(x, 2));
                        printf("Y = %lf\n", Y);
                    } else printf("Данные значения x и a не входят в область определения\n");
                }
                break;

            default:
                printf("Вы выбрали не существующий вариант"); //Для ошибочного ввода
        }
        printf("Для запуска программы нажмите 1, для выхода - 2\n");
        scanf("%d", &c);
    }
    return 0;

}