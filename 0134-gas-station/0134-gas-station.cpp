class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
          int ans = 0;
          int diff = 0;
          int total = 0;


          for(int i = 0; i < gas.size(); i++){
            diff += gas[i] - cost[i];
            total += gas[i] - cost[i];
            
             if(diff < 0){
                ans = i + 1;
                diff = 0;
             }
          }

          if(total < 0) return -1;
          else return ans;
    }
};