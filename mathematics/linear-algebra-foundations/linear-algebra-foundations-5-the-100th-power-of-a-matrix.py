# Mathematics > Linear Algebra Foundations > Linear Algebra Foundations #5 - The 100th Power of a Matrix
# Compute the 100<sup>the</sup> power of a given matrix.
#
# https://www.hackerrank.com/challenges/linear-algebra-foundations-5-the-100th-power-of-a-matrix/problem
#

import numpy as np

a = np.matrix([[1,1,0],[0,1,0],[0,0,1]])
print(a ** 100)

"""
réponse:

1
100
1
0
1
"""