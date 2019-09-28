import numpy as np
import matplotlib.pyplot as plt
import math
from coeffs import *
P=np.array([1/2,10])
Q=np.array([1/2,-10])
x_PQ = line_gen(P,Q)
plt.plot(x_PQ[0,:],x_PQ[1,:])
plt.axis('equal')
plt.xlabel('$x$');plt.ylabel('$y$')
plt.plot(O[0], O[1], 'o')
plt.text(O[0] * (1 + 0.1), O[1] * (1 - 0.1) , 'O')
plt.legend(loc='best');plt.grid()
plt.show()
