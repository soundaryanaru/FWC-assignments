from __future__ import division
from math import atan,pi,sqrt
import matplotlib.pyplot as plt
import sys
import numpy as np


# Calculate the arc Tan table once
ArcTanTable = []
for i in range(10):
  ArcTanTable.append(    atan( 2.0**(-1 * i) )    )
  
  
  
# Calculate the scaling factor K once
KN = []
value = 1.0
for i in range(10):
  value = value * sqrt(  1.0 + 2.0**(-2 * i)  )  
  KN.append(1.0 / value)
  
  
  

amp=[]
x=[]
amp2=[]
iterations=8


# For x-axis values taken inn radians (deg=0 to 360)
for i in range(0,360):
	rad = i* (pi / 180.0)
	x.append(rad)
count=0	
#calculating amplitudes of sin and cos in first quadrant	
for j in range(0,360):

	if j>270:
		j=j-360
	elif j>90:
	
		j=j-180
	
	beta = j* pi / 180.0
		#j=j-180

	
	Vx,Vy = 1.0 , 0.0

	for i in range(iterations):
		if beta < 0:
			Vx,Vy = Vx + Vy * 2.0**(-1 * i)  ,  Vy - Vx * 2.0**(-1 * i)
			beta = beta + ArcTanTable[i]
		else:
			Vx,Vy = Vx - Vy * 2.0**(-1 * i)  ,  Vy + Vx * 2.0**(-1 * i)
			beta = beta - ArcTanTable[i]

	Vx,Vy = Vx * KN[iterations - 1] , Vy * KN[iterations - 1] #Vx=cos amplitude ,#Vy=sin amp
	if len(amp)>270:
		amp.append(Vy)
		amp2.append(Vx)
	elif len(amp)>90:
		amp.append(-Vy)
		amp2.append(-Vx)
	
	else:
		amp.append(Vy)
		amp2.append(Vx)


	
	

plt.plot(x,amp)
plt.plot(x,amp2)
plt.axhline(y = 0, color = 'k', linestyle = '-')
plt.axvline(x = 0, color = 'k', linestyle = '-')
plt.show()

	

