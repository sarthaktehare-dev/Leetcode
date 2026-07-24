class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int ,int> mp;
        vector<int> temp;
        for(int i : arr) mp[i]++;

        for(auto it : mp){
            temp.push_back(it.second);
        }
        sort(temp.begin() , temp.end());

        for(int i = 1; i < temp.size(); i++){
            if(temp[i-1] == temp[i])
            return false;
        }
        return true;
    }
};