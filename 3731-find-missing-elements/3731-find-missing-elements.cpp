class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        
        vector<int> ans; 
        vector<int> temp;

        int largest = *max_element(nums.begin() , nums.end());
        int smallest = *min_element(nums.begin() , nums.end());
           
        sort(nums.begin() , nums.end());

             int idx = 0;
        for(int i = smallest; i < largest; i++){
           if(nums[idx] != i){
            ans.push_back(i);
           }
           else idx++;
        }
         
         

        
       

        return ans;
    }
};