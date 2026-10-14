class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int cnt = 0;
        int ele;
        int i = 0;

        while(i < nums.size()){

            if(cnt == 0){
                ele = nums[i];
                cnt = 1;
                i++;
            }
            else if(ele == nums[i]){
                cnt++;
                i++;
            }
            else {
                cnt--; 
                i++;
            }
        }
        return ele;
    }
};