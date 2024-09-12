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
    ListNode* partition(ListNode* head, int x) {
        ListNode* dummy1 = new ListNode(0);
        ListNode* dummy2 = new ListNode(0);
        ListNode* temp2 = dummy2;
        ListNode* temp3 = dummy1;
        ListNode* temp = head;
        while (temp){
            if (temp-> val < x){
                dummy1 -> next = temp;
                dummy1 = dummy1 -> next;
            }
            else if (temp -> val >= x){
                temp2 -> next = temp;
                temp2 = temp2 -> next;
            }
            temp = temp-> next;
        }

        temp2 -> next = NULL;
       dummy1 -> next = dummy2-> next;


        return temp3 -> next;
    }
};