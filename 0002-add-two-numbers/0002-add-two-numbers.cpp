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
        ListNode* dumy = new ListNode(-1);
        ListNode* temp1 = dumy;
        ListNode* temp2 = l1;
        ListNode* temp3 = l2;
        int curry = 0;
        while (temp2 != NULL || temp3!= NULL){
            int sum = curry;
            if (temp2) sum += temp2-> val;
            if (temp3) sum += temp3-> val;
            
            ListNode* value = new ListNode(sum % 10);
            curry = sum /10;
           temp1 -> next = value;
           temp1 = value ;

            if (temp2) temp2 = temp2-> next;
            if (temp3) temp3 = temp3 -> next;
        }
        if (curry){
            ListNode* ans = new ListNode(curry);
            temp1-> next = ans;
        }
        return dumy-> next;
    }
};