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
    ListNode* mergeNodes(ListNode* head) {
        int sum= 0;
        ListNode* prev = head-> next;
        ListNode* newhead = new ListNode(0);
        ListNode* temp1 = newhead;
        
        while (prev!= NULL){
          
            sum += prev-> val;
            if (prev->val == 0){
                ListNode* temp = new ListNode(sum);
                sum = 0;
                  newhead -> next = temp;
                  newhead = temp;
            }
            prev = prev->next;
          
        }
        return temp1-> next;
    }
};