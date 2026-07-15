class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int left = 0;
        int right = 0;

        while(right  < nums.size()){
            if(nums[right] == nums[right - 1]){
                right++;
            }
            else{
                nums[left] = nums[right - 1];
                left++;
                right++;
            }
        }
        nums[left] = nums[right - 1];
        left++;
        return left;
    }
};