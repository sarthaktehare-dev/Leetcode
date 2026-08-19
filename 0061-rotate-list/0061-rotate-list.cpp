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
    ListNode* rotateRight(ListNode* head, int k) {
        
        vector<int> temp;
        ListNode* t = head;
  if(head  == NULL || head -> next == NULL) return head;
    
        while(t != NULL){
            temp.push_back(t -> val);
            t = t -> next;
        }
          k = k % temp.size();

          reverse(temp.begin() , temp.end());
          reverse(temp.begin() , temp.begin() + k);
          reverse(temp.begin() + k , temp.end());

          ListNode* ans = new ListNode(-1);
          ListNode* temp1 = head;

          for(int i = 0; i < temp.size(); i++){
            temp1 -> val = temp[i];
            temp1 = temp1 -> next;
          }
          return head;
    }
};