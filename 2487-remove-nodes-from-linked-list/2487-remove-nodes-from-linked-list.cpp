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
    ListNode* removeNodes(ListNode* head) {
        
        vector<int> temp;
        ListNode* temp1 = head;
        vector<int> v1;
        

        while(temp1){
            temp.push_back(temp1 -> val);
            temp1 = temp1 -> next;
        }
           
        int maxi = temp[temp.size()-1];

        for(int i = temp.size()-1; i >= 0; i--){
            if(temp[i] >= maxi){
                v1.push_back(temp[i]);
                maxi = temp[i];
            }
        }
        reverse(v1.begin() , v1.end());
 
        ListNode* ans = new ListNode(-1);
        ListNode* temp2 = ans;

        for(int i = 0; i < v1.size(); i++){
            ListNode* newNode = new ListNode(v1[i]);
            temp2 -> next = newNode;
            temp2 = temp2 -> next;
        }
        return ans -> next;
    }
};