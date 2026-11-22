class Solution {
public:
    bool checkString(string s) {
        
        string word;
        int idx;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'a') idx++;
            else break;
        }
        cout<<idx;

        for(int i = idx; i < s.size(); i++){
            word.push_back(s[i]);
        }

        for(int i = 0; i < word.size(); i++){
            if(word[i] == 'a')
            return false;
        }
        return true;
    }
};