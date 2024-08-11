"""
stack.py
sidb95
bhatoresiddharth@gmail.com 
11 August 2024
"""

class Stack:
    def __init__(self):
        self.nums = []

    def push(self, val):
        self.nums.append(val)

    def pop(self):
        n = self.length()
        num1 = -1
        if (not self.empty()):
            num1 = self.nums[n - 1]
            self.nums.pop(n - 1)
        return num1

    def top(self):
        if (not self.empty()):
            return self.nums[-1]
        return -1

    def empty(self):
        return (self.nums == [])

    def length(self):
        return len(self.nums)
