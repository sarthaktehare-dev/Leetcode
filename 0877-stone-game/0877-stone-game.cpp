class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        
        int ans1 = 0;
        int ans2 = 0;
        int l1 = 0, l2 = 0;

        for(int i = 0; i < piles.size(); i+=2){
            l1 += piles[i];
        }
        for(int i = 1; i < piles.size(); i+=2){
            l2 += piles[i];
        }

        int r1 = 0, r2 = 0;

        for(int i = piles.size()-1; i >= 0; i-=2){
            r1 += piles[i];
        }

        for(int i = piles.size()-2; i >= 0; i-=2){
            r2 += piles[i];
        }

         ans1 = max(l1 , r1);
         ans2 = max(l2 , r2);

         if(ans1 <= ans2) return true;
         else return false; 
    }
};