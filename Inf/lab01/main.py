import math
from math import tan
from math import asin

a = int(input('Enter a:'))
x= int(input('Enter x:'))

G=(10*(-45*a**2+49*a*x+6*x**2))/(15*a**2+49*a*x+24*x**2)

print('A={0}, X={1}, Result: {2:.6f}'.format(a, x, G))

a = int(input('Enter a:'))
x= int(input('Enter x:'))

F=tan(5*a**2+34*a*x+45*x**2)

print('A={0}, X={1}, Result: {2:.6f}'.format(a, x, F))

a = float(input('Enter a:'))
x= float(input('Enter x:'))

Y=-asin(7*a**2-a*x-8*x**2)

print('A={0}, X={1}, Result: {2:.6f}'.format(a, x, Y))