class Solution(object):
    def isPalindrome(self, x):
        num = x
        ans = 0

        while num > 0:
            rev = num % 10
            ans = ans * 10 + rev
            num //= 10

        if ans == x: return True
        else: return False
        