import numpy as np
import scipy 
import matplotlib.pyplot as plt
from coeffs import *
from projopt import *



#Convexity and concavity
a=np.array([1/2,2])
b=np.array([1/2,8])
arg_a=arg_vec(a)
arg_b=arg_vec(b)
lamda=0.4
c = lamda *a + (1-lamda)*b
arg_c=arg_vec(c)
arg_c_hat = lamda *arg_a + (1-lamda)*arg_b

#Plot commands
plt.plot([a[1],a[1]],[0,arg_a],color=(1,0,0),marker='o',label="$arg_a$")
plt.plot([b[1],b[1]],[0,arg_b],color=(0,1,0),marker='o',label="$arg_b$")
plt.plot([c[1],c[1]],[0,arg_c],color=(0,0,1),marker='o',label="$arg_(\lambda a + (1-\lambda)b)$")
plt.plot([c[1],c[1]],[0,arg_c_hat],color=(1/2,2/3,3/4),marker='o',label="$\lambda arg(a) + (1-\lambda)arg(b)$")
plt.plot([a[1],b[1]],[arg_a,arg_b],color=(0,1,1))


#Plotting the functions graph
plt.plot(x[1,:],arg)
plt.plot(x_rs[0,:],x_rs[1,:],linestyle='dashed')
plt.plot(x_tu[0,:],x_tu[1,:],linestyle='dashed')


plt.axis('equal')
plt.xlabel('$x$');plt.ylabel('$y$')
plt.plot(O[0], O[1], 'o')
plt.text(O[0] * (1 + 0.1), O[1] * (1 - 0.1) , 'O')
plt.legend(loc='best');plt.grid()
plt.show()
