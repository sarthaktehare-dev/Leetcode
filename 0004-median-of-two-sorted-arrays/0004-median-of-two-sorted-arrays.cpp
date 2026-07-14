class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
           double ans;

        for(int i : nums2) nums1.push_back(i);

        sort(nums1.begin() , nums1.end());

            double mid = nums1.size() / 2;

            if(nums1.size() %2 == 0){
                ans = (nums1[mid] + nums1[mid - 1]) / 2.0;
             }
             else {
                ans = nums1[mid];
             }
        
        return ans;
    }
};