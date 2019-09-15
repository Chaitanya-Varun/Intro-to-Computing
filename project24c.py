import numpy as np
import matplotlib.pyplot as plt

#plotting circle

x=np.genfromtxt("x.dat")
y=np.genfromtxt("y.dat")
plt.plot(x,y)

#plotting lines

A1B1=np.genfromtxt("A1B1.dat")
plt.plot(A1B1[0,:],A1B1[1,:])


A2B2=np.genfromtxt("A2B2.dat")
plt.plot(A2B2[0,:],A2B2[1,:])


A3B3=np.genfromtxt("A3B3.dat")
plt.plot(A3B3[0,:],A3B3[1,:])

A4B4=np.genfromtxt("A4B4.dat")
plt.plot(A4B4[0,:],A4B4[1,:])

A5B5=np.genfromtxt("A5B5.dat")
plt.plot(A5B5[0,:],A5B5[1,:])

A6B6=np.genfromtxt("A6B6.dat")
plt.plot(A6B6[0,:],A6B6[1,:])

A7B7=np.genfromtxt("A7B7.dat")
plt.plot(A7B7[0,:],A7B7[1,:])

A8B8=np.genfromtxt("A8B8.dat")
plt.plot(A8B8[0,:],A8B8[1,:])


A9B9=np.genfromtxt("A9B9.dat")
plt.plot(A9B9[0,:],A9B9[1,:])

A10B10=np.genfromtxt("A10B10.dat")
plt.plot(A10B10[0,:],A10B10[1,:])

A11B11=np.genfromtxt("A11B11.dat")
plt.plot(A11B11[0,:],A11B11[1,:])

plt.axis('equal')
plt.xlabel('$x$');plt.ylabel('$y$')

plt.legend(loc='best');plt.grid()
plt.show()
