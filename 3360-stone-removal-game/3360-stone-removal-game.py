class Solution(object):
    def canAliceWin(self, n):
        """
        :type n: int
        :rtype: bool
        """
        cnt = 0
        remove = 10

        if n < remove:
            return False
        
        while n >= remove:
            n -= remove
            cnt += 1
            remove -= 1

        if cnt %2 == 0:
            return False
        else:
            return True
        