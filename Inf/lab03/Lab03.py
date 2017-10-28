from math import asin
from math import tan

start = int(input('Для запуска программы нажмите 1\n'))
while start == 1:
    a = float(input('Введите a:\n'))
    x = float(input('Введите x:\n'))
    k = int(input('Введите количество шагов\n'))
    n = int(input('Введите номер функции\n'))
    lim = x+(k*0.1)
    while x < lim:
        x += 0.1
        if n == 1:
            b = 15 * a ** 2 + 49 * a * x + 24 * x ** 2
            if b != 0:
                G = (10*(-45*a**2+49*a*x+6*x**2))/b
                print("G=%.3f" % G)
            else: print('Не входит в область определения')
        elif n == 2:
            F = tan(5*a**2+34*a*x+45*x**2)
            print("F=%.3f" % F)
        elif n == 3:
            d = 7 * a ** 2 - a * x - 8 * x ** 2
            if (d >= -1) & (d<=1):
                Y = -asin(d)
                print("Y=%.6f" %Y)
            else: print('Данные значения x и a не входят в область определения')
        else: print('Вы выбрали не существующий вариант')
start = int(input('Для запуска программы нажмите 1\n'))