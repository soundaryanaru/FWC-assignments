import matplotlib.pyplot as plt
import numpy as np
import sympy as sym
import subprocess
import shlex
import math
import cvxpy as cp
import mpmath as mp
from sympy. solvers import solve
from sympy import Symbol
def f(y,a,b,c,d):
    return a*y**3+b*y**2+c*y+d
  
x=cp.Variable('x')
y=cp.Variable('y')
p=cp.Variable('p')
b=solve(math.sqrt((x^2-y^2)))
A=(b*y)/2
print(A)
#p=x+y
a=-p/2
b=(p**2)/4
c=0
d=0
print(f(y,a,b,c,d))
ar=(p**2*y**2)/4-(p*y**3)/2
n=solve(ar,y)
print(n)
x=2*p/3
y=p/3
theta=mp.acos(x/y)
print(theta)
if(mp.cos(theta)==1/2):
	print("theta=60")
#Labelling points

#plt.legend()
#plt.savefig('/sdcard/FWC/Opt/Opt-2/opt2.png')
plt.show()
