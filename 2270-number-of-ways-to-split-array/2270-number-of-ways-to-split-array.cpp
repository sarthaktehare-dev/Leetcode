class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        
        long long leftsum = 0;
        long long  rightsum = 0;
        long long totalsum = 0;
        int ans = 0;
           
        for(int i : nums){
            totalsum += i;
        }

       for(int i = 1; i < nums.size(); i++){
           
         leftsum += nums[i-1];  
         rightsum = totalsum - leftsum;
        

        if(leftsum >= rightsum){
            ans++;
        }
       }
       return ans;
    }
};