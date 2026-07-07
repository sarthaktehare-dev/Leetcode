class Solution {
public:
    long long sumAndMultiply(int n) {
        
        long long num = n;
       long long a = 0;
        while(num != 0){
            int rev = num % 10;
          if(rev != 0){
          a = a *  10 +  rev;
          }
          num /= 10;
        }

        long long reverse = 0;
         
         while(a != 0){
            int rev = a % 10;

            reverse = reverse * 10 + rev;
            a /= 10;
         }

         long long revNum = reverse;
         long long sum = 0;

         while(reverse != 0){
            sum += reverse % 10;
            reverse /= 10;
         }

         return  revNum * sum;
    }
};