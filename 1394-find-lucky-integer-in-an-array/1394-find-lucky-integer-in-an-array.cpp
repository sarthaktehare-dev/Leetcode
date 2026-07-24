class Solution {
public:
    int findLucky(vector<int>& arr) {

     unordered_map<int , int> mp;
     int ans = -1;

     for(int  i : arr) mp[i]++;

     for(auto it :  mp){
        if(it.first == it.second)
        ans = max(ans , it.second);
        
     }   
     return ans;
    }
};