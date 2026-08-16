class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        
        sort(prices.begin() , prices.end());
        sort(discounts.begin() , discounts.end());

        double ans = 0;
        int k = prices.size() - discounts.size();
      
        int i = prices.size() - 1;
        int j = discounts.size() - 1;

        while(i >= 0 && j >= 0){
            ans += (prices[i] * (100 - discounts[j])) / 100.0;
            i--;
            j--;
        }

        for(int i = 0; i < k; i++){
            ans += prices[i];
        }

        return ans;
    }
};