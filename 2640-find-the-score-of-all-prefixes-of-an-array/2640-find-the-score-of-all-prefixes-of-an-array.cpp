class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
         

         vector<long long> ans(nums.size());
               
               long long sum = 0;
               int maxi = 0; 
         for(int i = 0; i < nums.size(); i++){
                maxi = max(maxi, nums[i]);
                
                long long num = nums[i] +  maxi;

                sum += num;

                ans[i] = sum;

         }

        
           return ans;
    }       
};