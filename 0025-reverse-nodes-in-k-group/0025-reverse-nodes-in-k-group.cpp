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
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        ListNode* temp = head;
        vector<int> v1;

        while(temp){
            v1.push_back(temp -> val);
            temp = temp -> next;
        }
            
        for(int i = 0; i < v1.size(); i+=k){
            if(i+k <= v1.size()){
            reverse(v1.begin()+i , v1.begin()+i+k);
            }
        }
        
        ListNode* ans = new ListNode(-1);
        ListNode* temp1 = ans;

        for(int i = 0; i < v1.size(); i++){
            ListNode* newNode = new ListNode(v1[i]);
            temp1 -> next = newNode;
            temp1 = temp1 -> next;
        }
      
        return ans -> next;
    }
};