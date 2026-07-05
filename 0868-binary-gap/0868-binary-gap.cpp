class Solution {
public:
    int binaryGap(int n) {
    
        vector<int> temp;

        while(n != 0){
            temp.push_back(n % 2);
            n /= 2;
        }
           
           int ans = 0;
        for(int i = 0; i < temp.size(); i++){
            if(temp[i]  != 0){
                int j = i + 1;
    while(j < temp.size() && temp[j] == 0) j++;
       if(i != temp.size()-1)
        ans = max(ans , j-i);
            }
        }
        return ans;
    }
};