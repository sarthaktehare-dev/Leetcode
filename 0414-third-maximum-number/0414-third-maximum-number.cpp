class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        unordered_map<int , int> mp;
        vector<int> temp;

        for(int i : nums) mp[i];

        for(auto it : mp){
            temp.push_back(it.first);
        }

        int first  = INT_MIN;
        int second = INT_MIN;
        int third  = INT_MIN;

        for(int i = 0; i < temp.size(); i++){
            if(temp[i] > first){
                third = second;
                second = first;
                first = temp[i];
            }
            else if(temp[i] > second){
                third = second;
                second = temp[i];
            }
            else if(temp[i] > third){
                third = temp[i];
            }
        }

        if(temp.size() < 3){
            return first;
        }
        
        return third;

    }
};