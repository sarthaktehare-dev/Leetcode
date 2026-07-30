class Solution {
public:
    string triangleType(vector<int>& nums) {
        

        string ans;
      sort(nums.begin(), nums.end());

      if(nums[0] + nums[1] > nums[2]){
        for(int i = 1; i < nums.size(); i++){
            if(nums[i-1] == nums[i] && nums[i] == nums[i+1]){
                ans += "equilateral";
                break;
            }
            else if(nums[i-1] == nums[i] || nums[i] == nums[i+1] || nums[i-1] == nums[i+1]){
                ans += "isosceles";
                break;
            }
            else ans = "scalene";
        }
      }
      else ans += "none";

      return ans;
        
    }
};