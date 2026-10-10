class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int large = 0;
        int sl = 0;

        for(int i = 0; i < nums.size(); i++){
            if(large < nums[i]){
                sl = large;
                large = nums[i];
            }
            else if(sl < nums[i] && sl != large){
                sl = nums[i];
            }
        }
        return (sl - 1) * (large - 1);
    }
};