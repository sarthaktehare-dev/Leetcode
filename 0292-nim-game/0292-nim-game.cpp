class Solution {
public:
    bool canWinNim(int n) {
        
    //    int cnt = 1;
         
    //   if(n == 1) return true; 
    //   if(n == 3) return true;       

    //      cnt += n / 3; 


         if(n %4 == 0) return false;
         else return true;
    }
};