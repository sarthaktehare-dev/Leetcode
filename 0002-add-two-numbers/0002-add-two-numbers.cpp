/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
         vector<int> v1;
         vector<int> v2;

         ListNode* h1 = l1;
         ListNode* h2 = l2;
         vector<int> temp;

         while(h1 !=  NULL){
            v1.push_back(h1->val);
            h1 = h1 -> next;
         }

         while(h2 != NULL){
            v2.push_back(h2 -> val);
            h2 = h2 -> next;
         }

         int i = 0;
         int j = 0;
         int carry = 0;

         while(i < v1.size() || j < v2.size() || carry != 0){
            int sum1 = 0;
            int sum2  = 0;

            if(i < v1.size()){
                sum1 = sum1 + v1[i];
                i++;
            }

            if(j < v2.size()){
                sum2 = sum2  + v2[j];
                j++;
            }

            int sum = sum1 + sum2 + carry;
            temp.push_back(sum % 10);
            carry = sum / 10;
         }


         ListNode* ans = new ListNode(-1);
         ListNode* temp1 = ans;

         for(int i = 0; i < temp.size(); i++){
            ListNode* newNode = new ListNode(temp[i]);
            temp1 -> next = newNode;
            temp1 = temp1 -> next;
         }
         return ans -> next;
    }
};