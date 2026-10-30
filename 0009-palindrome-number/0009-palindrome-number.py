class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """

        num = x
        ans = 0
        
        if x < 0:
            return False
            
        while num:
            ans = ans * 10 + num % 10
            num /= 10

        if ans == x:
            return True
        else:
            return False
        