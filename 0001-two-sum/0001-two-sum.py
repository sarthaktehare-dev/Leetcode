class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        mp = {}
        ans = []

        for i, num in enumerate(nums):
            if target - num in mp:
                ans.append(mp[target - num])
                ans.append(i)
                return ans

            mp[num] = i

        return ans
