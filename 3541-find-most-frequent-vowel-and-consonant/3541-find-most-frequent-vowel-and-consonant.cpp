class Solution {
public:
    int maxFreqSum(string s) {
        
        unordered_map<char , int> mp;
        int freq1 = 0;
        int freq2 = 0;
        
       for(char ch : s) mp[ch]++;

       for(auto it : mp){
        char ch = it.first;
        int cnt = it.second;

        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            freq1 = max(freq1 , cnt);
        }
        else freq2 = max(freq2 , cnt);
       }
       return freq1 + freq2;
    }
};