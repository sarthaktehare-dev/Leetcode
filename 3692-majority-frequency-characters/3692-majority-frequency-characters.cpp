class Solution {
public:
    string majorityFrequencyGroup(string s) {
        
        unordered_map<char , int> mp;
        int freq = 0;
        string ans = "";

        for(char ch : s) mp[ch]++;

        unordered_map<int , string> mp1;
        
        for(auto it : mp){
            mp1[it.second].push_back(it.first);
        }

        for(auto it : mp1){
            if(ans.size() < it.second.size()){
                ans = it.second;
                freq = it.first;
            }
            else if(ans.size() == it.second.size()){
                if(freq < it.first){
                ans = it.second;
                freq = it.first;
                }
            }
        }

        return ans;
    }
};