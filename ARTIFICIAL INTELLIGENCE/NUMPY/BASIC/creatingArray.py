# import numpy as np
# l=[]
# for x in range(1,5):
#     l.append(x)
# arr=np.array(l) 
# print(arr)

#!TYPES OF ARRAY ON DIMENSION BASIS
#? 1D ARRAY
#? 2D ARRAY
#? 3D ARRAY
#? HIGHER DIMENSION ARRAY

import numpy as np
import random
# l=[]
# for x in range(1,5):
#     l.append(x)
# arr=np.array(l) 
# print(arr.ndim)

#? 2D ARRAY
# arr2=np.array([[[[1,23,34,45],[2,3,4,5],[34,45,23,132],[454,45,4534,343]]]])
# arr=np.array([1,2,3],ndmin=10)
# print(arr)
# print(arr2.ndim)

#!ZEROS ELEMENT ARRAY

# arr=np.zeros((3,4))
# print(arr)

#! ONES ELEMENT ARRAY

# arr1=np.ones((3,4))
# print()
# print(arr1)

#! EMPTY ARRAY
# arr3=np.empty((4,4))
# print(arr3)

#! RANGE ELEMENT ARRAY
# arr4=np.arange(1,10,2)
# print(arr4)

#! DIAGONAL ARRAY
# arr5=np.eye(3,3)
# print(arr5)
# arr6=np.diag([1,2,3,4])
# print(arr6)

#!linspace
# arr7=np.linspace(1,10,5)
# print(arr7)

#!RANDOM VALUED ARRAY
# arr8=np.random.rand(3)
# print(arr8)

# arr9=np.random.randn(3)
# print(arr9)

# arr10=np.random.ranf(3)
# print(arr10)

arr11=np.random.randint(1,100,5)
print(arr11)
