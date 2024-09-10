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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (head == NULL || head -> next == NULL)return head;
        ListNode* curr  = head;
        while (curr->next!= NULL){
            ListNode* nextnode = curr-> next;
            ListNode* temp = new ListNode(__gcd(curr-> val,nextnode-> val)) ;
           temp -> next = curr -> next;

            curr-> next = temp;
            curr = curr-> next -> next;

            
        }
        return head;
    }
};