class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int left = 0;
        int right = 1;

        while(right  < nums.size()){
            if(nums[right - 1] == nums[right]){
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