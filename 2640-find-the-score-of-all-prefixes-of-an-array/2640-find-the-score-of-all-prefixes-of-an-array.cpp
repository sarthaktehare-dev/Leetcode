class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
         

         vector<long long> ans(nums.size());
               
               long long sum = 0;
               int maxi = 0; 
         for(int i = 0; i < nums.size(); i++){
                maxi = max(maxi, nums[i]);
                
                ans[i] = nums[i] +  maxi;
         }

         for(int i  = 0; i < nums.size(); i++){
               sum += ans[i];
             ans[i] = sum;
         }
           return ans;
    }       
};