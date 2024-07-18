"""
readAndPrint.py
sidb95
bhatoresiddharth@gmail.com 
18 July 2024
"""

class Solution:
  def __init__(self)
    pass

  def readAndPrint(self, filename):
    f = open(filename, 'r')
    line = f.readline()
    while (line != ""):
      print(line, end = "")
      line = f.readline()
    print('\n')
    return

