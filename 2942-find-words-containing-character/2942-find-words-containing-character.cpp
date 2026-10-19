class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        
       set<int> temp;
       vector<int> ans;

        for(int i = 0; i < words.size(); i++){
            string num = words[i];
            for(int j = 0; j < num.size(); j++){
                if(num[j] == x)
                temp.insert(i);
            }
        }
         for(int i : temp) ans.push_back(i);
         return ans;
    }
};