class Solution {
public:
    bool isSameAfterReversals(int num) {
        
        int n = 0;
        int num1 = num;
        while(num1 != 0){
            n = n * 10 + num1 % 10;
            num1 /= 10;
        }

        int ans = 0;

          while(n != 0){
            ans = ans * 10 + n % 10;
            n /= 10;
          }

          if(ans == num) return true;
          else return false;
    }
};