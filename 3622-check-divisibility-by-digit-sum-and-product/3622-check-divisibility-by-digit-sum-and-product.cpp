class Solution {
public:
    bool checkDivisibility(int n) {
        
        int num1 = n;
        int num2 = n;
        int sum = 0;
        int prod = 1;

        while(num1 != 0 && num2 != 0){
            sum += num1 % 10;
            prod *= num2 % 10;
            num1 /= 10;
            num2 /= 10;
        }

        if(n % (sum + prod) == 0) return true;
        else  return false; 
    }
};