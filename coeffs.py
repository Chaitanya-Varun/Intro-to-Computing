import numpy as np


def dir_vec(A,B):
  return B-A

def norm_vec(A,B):
  return np.matmul(omat, dir_vec(A,B))

# defining matrix for finding conjugate
cjt = np.array([[1,0],[0,-1]])

def conj_no(z):
	return np.matmul(cjt,z)

#Generate line points
def line_gen(A,B):
  len =10
  x_AB = np.zeros((2,len))
  lam_1 = np.linspace(0,1,len)
  for i in range(len):
    temp1 = A + lam_1[i]*(B-A)
    x_AB[:,i]= temp1.T
  return x_AB

#Generate line points
def line_dir_pt(m,A,k1,k2):
  len =10
  x_AB = np.zeros((2,len))
  lam_1 = np.linspace(k1,k2,len)
  for i in range(len):
    temp1 = A + lam_1[i]*m
    x_AB[:,i]= temp1.T
  return x_AB

A = np.array([-2,-2]) 
B = np.array([1,3]) 
dvec = np.array([-1,1]) 
# defining omat matrix
omat = np.array([[0,1],[-1,0]]) 
AB =np.vstack((A,B)).T

#defining the arguement
def arg_vec(A):
	theta=math.acos(A[0]/np.linalg.norm(A))
	return theta
#defining origin
O=np.array([0,0])

