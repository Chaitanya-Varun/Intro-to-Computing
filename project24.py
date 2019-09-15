import numpy as np
import matplotlib.pyplot as plt
import math
from coeffs import *
#Computaion part
#defining the direction vector of the normal of the line
P=np.array([1,1])
print("P=",P)
#finding the direction  vector of the line
m=omat@P
print("m=",m)
#finding the point of intersection
s=np.array(([-1,1],[1,1]))
#intersection1
k1=np.array([0,5])
t1=np.linalg.inv(s)@k1
print("t1=",t1)
#intersection2
k2=np.array([0,4])
t2=np.linalg.inv(s)@k2
print("t2=",t2)
#intersection3
k3=np.array([0,3])
t3=np.linalg.inv(s)@k3
print("t3=",t3)
#intersection4
k4=np.array([0,2])
t4=np.linalg.inv(s)@k4
print("t4=",t4)
#intersection5
k5=np.array([0,1])
t5=np.linalg.inv(s)@k5
print("t5=",t5)
#intersection6
k6=np.array([0,0])
t6=np.linalg.inv(s)@k6
print("t6=",t6)
#Finding their distances of line from centre
#distance from origin to line1 perpendicularly
d1=np.linalg.norm(t1)
print("d1=",d1)
#distance from origin to line2 perpendicularly
d2=np.linalg.norm(t2)
print("d2=",d2)
#distance from origin to line3 perpendicularly
d3=np.linalg.norm(t3)
print("d3=",d3)
#distance from origin to line4 perpendicularly
d4=np.linalg.norm(t4)
print("d4=",d4)
#distance from origin to line5 perpendicularly
d5=np.linalg.norm(t5)
print("d5=",d5)
#distance from origin to line6 perpendicularly
d6=np.linalg.norm(t6)
print("d6=",d6)
#Finding the length of the intercepts
r=4
#intercept1
l1=2*np.sqrt((4*4)-(d1*d1))
print("l1=",l1)
#intercept2
l2=2*np.sqrt((4*4)-(d2*d2))
print("l2=",l2)
#intercept3
l3=2*np.sqrt((4*4)-(d3*d3))
print("l3=",l3)
#intercept4
l4=2*np.sqrt((4*4)-(d4*d4))
print("l4=",l4)
#intercept5
l5=2*np.sqrt((4*4)-(d5*d5))
print("l5=",l5)
#intercept6
l6=2*np.sqrt((4*4)-(d6*d6))
print("l6=",l6)
#Finding the sum of the squares of the intercepts
S=(l1*l1+l2*l2+l3*l3+l4*l4+l5*l5)*2+l6*l6
print("S=",S)
#data for  circle
O=np.array([0,0])
n=np.array([1,1])
r=4
c=O
len = 1000
theta = np.linspace(0,2*np.pi,len)
x_circ = np.zeros((2,len))
x_circ[0,:] = r*np.cos(theta)
x_circ[1,:] = r*np.sin(theta)
x_circ = (x_circ.T + c).T



#data for lines
A1=np.array([4,-2])
B1=np.array([-4,6])
A2=np.array([4,-3])
B2=np.array([-4,5])
A3=np.array([2*np.sqrt(2),-2*np.sqrt(2)])
B3=np.array([-2*np.sqrt(2),2*np.sqrt(2)])
A4=np.array([-4,3])
B4=np.array([4,-5])
A5=np.array([-4,2])
B5=np.array([4,-6])
A6=np.array([-4,7])
B6=np.array([4,-1])
A7=np.array([4,-7])
B7=np.array([-4,1])
A8=np.array([4,0])
B8=np.array([0,4])
A9=np.array([-4,0])
B9=np.array([0,-4])
A10=np.array([5,0])
B10=np.array([0,5])
A11=np.array([-5,0])
B11=np.array([0,-5])


#plotting lines
x_A1B1 = line_gen(A1,B1)
plt.plot(x_A1B1[0,:],x_A1B1[1,:])
x_A2B2 = line_gen(A2,B2)
plt.plot(x_A2B2[0,:],x_A2B2[1,:])
x_A3B3 = line_gen(A3,B3)
plt.plot(x_A3B3[0,:],x_A3B3[1,:])
x_A4B4 = line_gen(A4,B4)
plt.plot(x_A4B4[0,:],x_A4B4[1,:])
x_A5B5 = line_gen(A5,B5)
plt.plot(x_A5B5[0,:],x_A5B5[1,:])
x_A6B6 = line_gen(A6,B6)
plt.plot(x_A6B6[0,:],x_A6B6[1,:])
x_A7B7 = line_gen(A7,B7)
plt.plot(x_A7B7[0,:],x_A7B7[1,:])
x_A8B8 = line_gen(A8,B8)
plt.plot(x_A8B8[0,:],x_A8B8[1,:])
x_A9B9 = line_gen(A9,B9)
plt.plot(x_A9B9[0,:],x_A9B9[1,:])
x_A10B10 = line_gen(A10,B10)
plt.plot(x_A10B10[0,:],x_A10B10[1,:])
x_A11B11 = line_gen(A11,B11)
plt.plot(x_A11B11[0,:],x_A11B11[1,:])

#plotting circle
plt.plot(x_circ[0,:],x_circ[1,:],label='$C_1$')

plt.axis('equal')
plt.xlabel('$x$');plt.ylabel('$y$')
plt.plot(O[0], O[1], 'o')
plt.text(O[0] * (1 + 0.1), O[1] * (1 - 0.1) , 'O')
plt.legend(loc='best');plt.grid()
plt.show()

