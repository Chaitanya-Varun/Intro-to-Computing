import numpy as np
import matplotlib.pyplot as plt
import math
from coeffs import *

#defining the angle between two vectors
def arg_vec(A):
	theta=math.acos(A[0]/np.linalg.norm(A))
	return theta

P=np.array([1/2,10])
Q=np.array([1/2,-10])

#x_PQ = line_gen(P,Q)
#plt.plot(x_PQ[0,:],x_PQ[1,:])
len=100
y = np.linspace(-50,50,len)
x=np.zeros((2,len))
x[0,:]=[1/2]*len
x[1,:]=np.linspace(-50,50,len)
arg=np.zeros(len)
for i in range(len):
	arg[i]=-arg_vec(x[:,i]) if i<len/2 else arg_vec(x[:,i])
plt.plot(x[1,:],arg)
r=np.array([-100,np.pi/2])
s=np.array([100,np.pi/2])
x_rs = line_gen(r,s)
plt.plot(x_rs[0,:],x_rs[1,:],linestyle='dashed')
t=np.array([-100,-np.pi/2])
u=np.array([100,-np.pi/2])
x_tu = line_gen(t,u)
plt.plot(x_tu[0,:],x_tu[1,:],linestyle='dashed')
plt.axis('equal')
plt.xlabel('$x$');plt.ylabel('$y$')
plt.plot(O[0], O[1], 'o')
plt.text(O[0] * (1 + 0.1), O[1] * (1 - 0.1) , 'O')
plt.legend(loc='best');plt.grid()
plt.show()
