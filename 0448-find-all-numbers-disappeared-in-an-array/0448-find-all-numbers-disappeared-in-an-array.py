class Solution(object):
    def findDisappearedNumbers(self, nums):

        mp = {}
        temp = []

        for i in range (len(nums)):
            mp[nums[i]] = mp.get(nums[i] , 0) + 1

        for i in range(1 , len(nums) + 1):
            if i not in mp:
                temp.append(i)

        return temp
        