class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int ans = 0;
        int left = 0;
        int right = height.size()-1;
          
          while(left <= right){
         int breath = right - left;
         int ht = min(height[left] , height[right]);
         int wt = breath * ht;
         ans = max(ans , wt);

         if(height[left] < height[right]) left++;
         else right--;
          }
            return ans;
           }
};