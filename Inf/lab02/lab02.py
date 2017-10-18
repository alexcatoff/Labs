from math import asin
from math import tan

c = input('Если хотите вычислить значение G нажмите 1, введите 2 для вычисления F, введите 3 для вычисления Y')


if c == '1':
    a = int(input('Enter a:'))
    x = int(input('Enter x:'))
    b = 15 * a ** 2 + 49 * a * x + 24 * x ** 2
    if b != 0:
        G=(10*(-45*a**2+49*a*x+6*x**2))/b
        print('A={0}, X={1}, Result: {2:.6f}'.format(a, x, G))
    else: print('Введите другие значения x и a')
elif c == '2':
      a = int(input('Enter a:'))
      x = int(input('Enter x:'))
      F = tan(5*a**2+34*a*x+45*x**2)
      print('A={0}, X={1}, Result: {2:.6f}'.format(a, x, F))
elif c == '3':
    a = float(input('Enter a:'))
    x = float(input('Enter x:'))
    d = 7 * a ** 2 - a * x - 8 * x ** 2
    if d >= 0:
        Y = -asin(d)
        print('A={0}, X={1}, Result: {2:.6f}'.format(a, x, Y))
    else:  print('Введите другие значения x и a')

else: print("Вы ввели не корректное значение")

