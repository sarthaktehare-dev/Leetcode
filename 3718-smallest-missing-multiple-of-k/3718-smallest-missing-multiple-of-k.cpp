class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        
        unordered_map<int,int>mp;

        for(int i:nums)mp[i];

        int mul=1;

        while(true){
          
          if(mp.find(mul*k)==mp.end())return mul*k;
          mul++;
        }

        return 0;

    }
};