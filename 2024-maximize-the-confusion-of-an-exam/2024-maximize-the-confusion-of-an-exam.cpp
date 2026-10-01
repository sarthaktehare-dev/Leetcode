class Solution {
public:
    int sliding(string &s, int k, char ch){
        int i = 0, j = 0;
        int ans = 0;
        int cnt = 0;

        while(j < s.size()){
            if(s[j] != ch) cnt++;
            if(cnt <= k){
                ans = max(ans , j-i+1);
                j++;
            }
            else{
                while(cnt > k){
                    if(s[i] != ch) cnt--;
                    i++;
                }
                j++;
            }
        }
        return ans;
    }
    int maxConsecutiveAnswers(string answerKey, int k) {
        
        int truecase  = sliding(answerKey, k, 'T');
        int falsecase = sliding(answerKey, k, 'F');

        return max(truecase , falsecase);
    }
};