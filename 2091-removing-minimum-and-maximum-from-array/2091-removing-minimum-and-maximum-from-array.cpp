class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        
        int minIdx = 0;
        int maxIdx = 0;
        int maxi = nums[0];
        int  mini = nums[0];
        int n = nums.size();

        for(int i = 1; i < nums.size(); i++){
            if(maxi < nums[i]){
            maxi = nums[i];
            maxIdx = i;
        }
        }

        for(int i = 1; i < nums.size(); i++){
            if(mini > nums[i]){
            mini = nums[i];
            minIdx = i;
            }
        }

        int left = min(minIdx , maxIdx);
        int right = max(minIdx , maxIdx);

        return min({(left + 1 + n - right) , right + 1 , n - left});
        
    }
};