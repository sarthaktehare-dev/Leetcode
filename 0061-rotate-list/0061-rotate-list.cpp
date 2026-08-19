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
        
    if(head == NULL || head -> next == NULL) return head;
        vector<int> temp;
        ListNode* temp1 = head;

        while(temp1){
            temp.push_back(temp1 -> val);
            temp1 = temp1 -> next;
        }
           k = k % temp.size();
           
        reverse(temp.begin() , temp.end());
        reverse(temp.begin() , temp.begin() + k);
        reverse(temp.begin() + k , temp.end());

        ListNode*  ans = new ListNode(-1);
        ListNode* temp3 = ans;

        for(int i = 0; i < temp.size(); i++){
            ListNode* newNode = new ListNode(temp[i]);
            temp3 -> next = newNode;
            temp3 = temp3 -> next;
        } 
        return ans -> next;
    }
};