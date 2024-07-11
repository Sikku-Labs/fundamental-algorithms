"""
Main File Print 2
sidb95
bhatoresiddharth@gmail.com 
11 July 2024
"""

from print import Print

class Solution:
  def __init__(self):
    pass

  def mainP2Aux(self, s: str, n: int, i: int) -> None:
    P1 = Print()
    if i == n:
      return
    else:
      P1.printString(s[i])
      mainP2Aux(self, s, n, i + 1)
    return None

  def mainP2(self, s: str) -> None:
    mainP2Aux(self, s, len(s), 0)
    return None
