class Solution(object):
    def firstMissingPositive(self, nums):
        mp = {}
        

        for i in nums:
            if i > 0:
                mp[i] = mp.get(i,0) + 1

        size = len(nums) + 1

        for i in range(1 , size):
            if i not in mp:
                return i

        return len(nums) + 1

        