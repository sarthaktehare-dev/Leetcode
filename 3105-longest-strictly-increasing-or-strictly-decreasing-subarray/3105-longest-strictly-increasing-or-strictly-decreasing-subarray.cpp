class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
           
           int cnt1 = 0, cnt2 = 0;
           int ans = 1;

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > nums[i-1]){
                cnt1++;
                ans = max(ans , cnt1 + 1);
            }
            else{
                cnt1 = 0;
            }

            if(nums[i] < nums[i-1]){
                cnt2++;
                ans = max(ans, cnt2 + 1);
            }
            else cnt2 = 0;
        }

        
        return ans;
    }
};