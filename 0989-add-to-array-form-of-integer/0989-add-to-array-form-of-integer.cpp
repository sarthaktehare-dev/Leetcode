class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {

         int n = 0;
         int carry = 0;
         vector<int> ans;
         int i = num.size()-1;

         while(i >= 0 || k > 0 || carry > 0){
            int sum1 = 0, sum2 = 0;

            if(i >= 0){
                sum1 = sum1 * 10 + num[i];
                i--;
            }

            if(k > 0){
                sum2 = sum2 * 10 + k % 10;
                k /= 10;
            }
              
              int sum = sum1 + sum2 + carry;

              ans.push_back(sum % 10);
              carry = sum / 10;
         }   
         reverse(ans.begin() , ans.end());
         return ans;
    }
};