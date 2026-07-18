class Solution(object):
    def reverse(self, x):
        num = x
        sign = 1
        ans = 0

        if num < 0:
            sign = -1
            num = -num
        
        while num > 0:
            rev = num % 10
            ans = ans * 10 + rev
            num //= 10

        ans *= sign

        if ans < -(2 ** 31) or ans > (2 ** 31):
            return 0

        return ans
   
        