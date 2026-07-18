class Solution(object):
    def removeDuplicates(self, nums):
        left = 0
        right = 1

        while right < len(nums):
            if nums[right - 1] == nums[right]:
                right += 1
            else:
                nums[left] = nums[right - 1]
                left += 1
                right += 1

           

        nums[left] = nums[right - 1]
        left += 1

        return left

       
        