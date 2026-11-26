class Solution {
public:
    bool canAliceWin(int n) {
        
         int cnt = 0;
         int remove = 10;
         
          if(n < remove) return false;

         while(n >= remove){
            n -= remove;
            cnt++;
            remove--;
         }

         if(cnt %2 == 0) return false;
         else return true;
    }
};