class Solution {
public:
    bool canAliceWin(int n) {
        
        vector<int> v;
 int cnt = 0;
 int remove = 10;
 if(n < 10) return false;
 
       while(n >= remove){
         n = n - remove;
         cnt++;
         remove--;
          //v.push_back(1);
       }   
         if(cnt %2 == 0) return false;
        else return true;

       

    //    int alice = 0;
    //    int bob = 0;

    //   for(int i = 0; i < v.size(); i++){
    //     if(i %2 == 0 && v[i] == 1) alice++;
    //     else bob++;
    //   }

    //   if(alice > bob) return true;
    //   else return false;
    }
};