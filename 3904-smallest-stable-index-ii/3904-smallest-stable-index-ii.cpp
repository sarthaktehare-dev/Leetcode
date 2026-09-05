class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        
        vector<int> v1(nums.size());
        vector<int> v2(nums.size());
           
           int maxi = nums[0];
        for(int i = 0; i < nums.size(); i++){
            maxi = max(maxi , nums[i]);
            v1[i] = maxi;
        }
           int mini = nums[nums.size()-1];
        for(int i = nums.size()-1; i >= 0; i--){
            mini = min(mini , nums[i]);
            v2[i] = mini;
        }
           
           for(int i = 0; i < nums.size(); i++){
            if(v1[i] - v2[i] <= k){
                return i;
            }
           }
         return -1;
    }
};