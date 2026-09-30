class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int leftsum = 0;
        int rightsum = 0;
        int totalsum = 0;

        for(int i : nums){
            totalsum += i;
        }
     
     
        for(int i = 0; i < nums.size(); i++){
             
             rightsum = totalsum - leftsum - nums[i];

             if(leftsum == rightsum){
                return i;
                break;
             }
             leftsum += nums[i];
        }
        return -1;
    }
};