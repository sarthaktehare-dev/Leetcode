class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {

         int ans = 0;
        sort(special.begin() , special.end());
        
         ans = max(ans , abs(special[0] - bottom));  

         for(int i = 1; i < special.size(); i++){
            ans = max(ans , (special[i] - special[i-1] - 1));
         } 

         ans = max(ans , abs(top - special[special.size() - 1]));

         return ans;
    }
};