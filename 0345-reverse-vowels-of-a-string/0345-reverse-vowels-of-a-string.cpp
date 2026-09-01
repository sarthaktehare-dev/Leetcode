class Solution {
public:
    string reverseVowels(string s) {
        
        vector<char> temp;
      //  vector<char> ans;
      //  for(char ch : s) ans.push_back(ch);

        for(int i = 0; i < s.size(); i++){
if(s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O'|| s[i] == 'u' || s[i] == 'U'){
    temp.push_back(s[i]);
}
        }
    
    int left = 0;
    int right = temp.size()-1;

    while(left <= right){
        swap(temp[left] , temp[right]);
        left++;
        right--;
    }

    int j = 0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O'|| s[i] == 'u' || s[i] == 'U'){
        s[i] = temp[j];
        j++;
    }
    }
        
          return s;
    }
};