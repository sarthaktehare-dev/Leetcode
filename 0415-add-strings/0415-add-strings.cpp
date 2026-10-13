class Solution {
public:
    string addStrings(string num1, string num2) {
        
        int i = num1.size()-1;
        int j = num2.size()-1;
        string ans;
        int carry = 0;

        while(i >= 0 || j >= 0 || carry != 0){
            int sum1 = 0, sum2 = 0;

            if(i >= 0){
                sum1 = sum1 * 10 + num1[i] - '0';
                i--;
            }
            if(j >= 0){
                sum2 = sum2 * 10 + num2[j] - '0';
                j--;
            }

            int sum = sum1 + sum2 + carry;
            ans.push_back(sum % 10 + '0');
            carry = sum / 10;
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};