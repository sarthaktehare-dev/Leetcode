class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        
        int s1 = 0, s2 = 0;
        if(n == 1) return 1;
        int num1 = n;
        int num2 = n;
        int i = 1;
        while(num1 > 0){
            s1 += i;
            i += 2;
            num1--;
        }
        int j = 2;
        while(num2 > 0){
            s2 += j;
            j += 2;
            num2--;
        }

        if(s1 > s2){
            s1 = s1 % s2;
            return s1;
        }
        else{
            s2 = s2 % s1;
            return s2;
        }

    }
};