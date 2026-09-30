class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        
        int leftsum = 0;
        int rightsum = 0;
        int totalsum = 0;

        for(int i : nums){
            totalsum += i;
        }

        for(int i = 0; i < nums.size(); i++){
           
           rightsum = totalsum - leftsum - nums[i];

           if(rightsum == leftsum){
            return i;
            break;
           }

           leftsum += nums[i];
        }

        return -1;
    }
};