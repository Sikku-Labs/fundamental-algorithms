"""
gcd.py
sidb95
bhatoresiddharth@gmail.com 
12 July 2024
"""

class Solution:
  def __init__(self):
    pass

  def gcd(a: int, b: int) -> int:
    if (a == 1):
      return b
    else:
      TEMP = a
      a = a % b
      b = a
      return gcd(a, b)
