class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> s;
       
        for(int i = 0; i < nums.size(); i++) s.insert(nums[i]);

       
           int cnt = 0;

           int ans = 0;
        
        for(auto it : s){
            if(s.find(it-1) == s.end()){
              cnt = 1;
             int rev = it;

             while(s.find(rev + 1) != s.end()){
                cnt++;
                rev = rev + 1;
             }
                ans = max(ans , cnt);
            }
        }
        
        return ans;
    }
};