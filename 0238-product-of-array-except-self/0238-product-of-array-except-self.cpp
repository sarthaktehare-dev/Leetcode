class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

     int cnt = 0;
     int prod = 1;
     vector<int> ans(nums.size() , 0);

     for(int i = 0; i < nums.size(); i++){
        if(nums[i] == 0) cnt++;
        else prod *= nums[i];
     }   
    
    if(cnt > 1) return ans;

    if(cnt == 1){
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                ans[i] = prod;
            }
            else ans[i] = 0;
        }
        return ans;
    }
       for(int i = 0; i < nums.size(); i++){
        ans[i] = prod / nums[i];
       }
       return ans;
    }
};