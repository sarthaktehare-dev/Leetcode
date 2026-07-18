class Solution(object):
    def maxArea(self, height):
        left = 0
        right = len(height) - 1
        water = 0

        while left <= right:
            length = right - left
            ht = min(height[left] , height[right])
            area = ht * length
            water = max(water , area)

            if(height[left] < height[right]): left += 1
            else: right -= 1


        return water
        