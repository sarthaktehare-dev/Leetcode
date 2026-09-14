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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        vector<int> temp;
        ListNode* temp1 = head;

        while(temp1){
          temp.push_back(temp1 -> val);
          temp1 = temp1 -> next;
        } 

        while(left <= right){
            swap(temp[left-1] , temp[right-1]);
            left++;
            right--;
        }
            ListNode* ans = new ListNode(-1);
            ListNode* temp2 = ans;

            for(int i = 0; i < temp.size(); i++){
                ListNode* newNode = new ListNode(temp[i]);
                temp2 -> next = newNode;
                temp2 = temp2 -> next;
            }

            return ans -> next;
    }
};