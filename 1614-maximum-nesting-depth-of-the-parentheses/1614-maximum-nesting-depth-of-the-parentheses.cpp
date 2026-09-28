class Solution {
public:
    int maxDepth(string s) {

     stack<char> st;
     int cnt = 0;
     int ans = 0;

     for(int i = 0; i < s.size(); i++){
        if(s[i] == '('){
            st.push('(');
            cnt++;
            ans = max(ans , cnt);
        }
        else if(s[i] == ')') {
           if(!st.empty()){
              st.pop();
              cnt--;
           }
           
        }
        ans = max(ans , cnt);
     }   
     return ans ;
    }
};