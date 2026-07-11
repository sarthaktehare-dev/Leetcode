class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        
     unordered_map<int , int> mp;
     int ans = -1;
     int cnt = 0;

     for(int i = 0; i < nums.size(); i++){
        if(nums[i] %2 == 0)
        mp[nums[i]]++;
     }

     for(auto it : mp){
        if(it.second > cnt){
            cnt = it.second;
            ans = it.first;
        }
        else if(it.second == cnt){
            ans = min(ans , it.first);
        }
     }
     return ans;
    }
};