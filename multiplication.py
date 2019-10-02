import random,time
import numpy as exp
mat1=[[random.randint(1,1000) for i in range(1000)] for j in range(1000)]
mat2=[[random.randint(1,1000) for i in range(1000)] for j in range(1000)]
#print(mat1)
#print(matr2)
result=[[0 for i in range(1000)] for j in range(1000)]
start=time.time()
#for i in range(1000):
#   for j in range(1000):
#       for k in range(1000):
#           result[i][j] += mat1[i][k] * mat2[k][j]

result2=exp.dot(mat1,mat2)

print("Time Taken by :"+ (time.time() -start))

