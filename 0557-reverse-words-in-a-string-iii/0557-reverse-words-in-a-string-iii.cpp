class Solution {
public:
    string reverseWords(string s) {

     string ans;
 int n = s.size();
     for(int i = 0; i < s.size(); i++){
        string word;
        while(i<n && s[i] != ' '){
        word += s[i];
          i++;
        }
        reverse(word.begin() , word.end());
        if(!ans.empty()) ans += " ";
        ans += word;
     }   
     return ans;
    }
};