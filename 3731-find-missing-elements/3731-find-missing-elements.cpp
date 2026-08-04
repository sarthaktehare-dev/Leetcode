class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        
        vector<int> ans; 
        unordered_map<int,int> mp;


        int largest = *max_element(nums.begin() , nums.end());
        int smallest = *min_element(nums.begin() , nums.end());
           
    for(int i : nums) mp[i]++;

    for(int i = smallest ; i < largest; i++){
        if(mp.find(i) == mp.end())
        ans.push_back(i);
    }
         
         

        
       

        return ans;
    }
};