class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

     vector<int> ans;
     int cnt1 = 0 , cnt2 = 0;
     int ele1 , ele2;

     for(int i = 0; i < nums.size(); i++){
        if(cnt1 > 0 && ele1 == nums[i])
             cnt1++;

        else if(cnt2 > 0 && ele2 == nums[i]) 
             cnt2++;

        else if(cnt1 == 0){
            ele1 = nums[i];
            cnt1 = 1;
        }

        else if(cnt2 == 0){
            ele2 = nums[i];
            cnt2 = 1;
        }

        else cnt1-- , cnt2--;
     }   

          cnt1 = 0;
          cnt2 = 0;

          for(int i = 0; i < nums.size(); i++){
            if(ele1 == nums[i]) cnt1++;

            else if(ele2 == nums[i]) cnt2++;
          }

          if(cnt1 > nums.size() / 3)
          ans.push_back(ele1);

           if(cnt2 > nums.size() / 3)
          ans.push_back(ele2);

          return ans;
    }
};