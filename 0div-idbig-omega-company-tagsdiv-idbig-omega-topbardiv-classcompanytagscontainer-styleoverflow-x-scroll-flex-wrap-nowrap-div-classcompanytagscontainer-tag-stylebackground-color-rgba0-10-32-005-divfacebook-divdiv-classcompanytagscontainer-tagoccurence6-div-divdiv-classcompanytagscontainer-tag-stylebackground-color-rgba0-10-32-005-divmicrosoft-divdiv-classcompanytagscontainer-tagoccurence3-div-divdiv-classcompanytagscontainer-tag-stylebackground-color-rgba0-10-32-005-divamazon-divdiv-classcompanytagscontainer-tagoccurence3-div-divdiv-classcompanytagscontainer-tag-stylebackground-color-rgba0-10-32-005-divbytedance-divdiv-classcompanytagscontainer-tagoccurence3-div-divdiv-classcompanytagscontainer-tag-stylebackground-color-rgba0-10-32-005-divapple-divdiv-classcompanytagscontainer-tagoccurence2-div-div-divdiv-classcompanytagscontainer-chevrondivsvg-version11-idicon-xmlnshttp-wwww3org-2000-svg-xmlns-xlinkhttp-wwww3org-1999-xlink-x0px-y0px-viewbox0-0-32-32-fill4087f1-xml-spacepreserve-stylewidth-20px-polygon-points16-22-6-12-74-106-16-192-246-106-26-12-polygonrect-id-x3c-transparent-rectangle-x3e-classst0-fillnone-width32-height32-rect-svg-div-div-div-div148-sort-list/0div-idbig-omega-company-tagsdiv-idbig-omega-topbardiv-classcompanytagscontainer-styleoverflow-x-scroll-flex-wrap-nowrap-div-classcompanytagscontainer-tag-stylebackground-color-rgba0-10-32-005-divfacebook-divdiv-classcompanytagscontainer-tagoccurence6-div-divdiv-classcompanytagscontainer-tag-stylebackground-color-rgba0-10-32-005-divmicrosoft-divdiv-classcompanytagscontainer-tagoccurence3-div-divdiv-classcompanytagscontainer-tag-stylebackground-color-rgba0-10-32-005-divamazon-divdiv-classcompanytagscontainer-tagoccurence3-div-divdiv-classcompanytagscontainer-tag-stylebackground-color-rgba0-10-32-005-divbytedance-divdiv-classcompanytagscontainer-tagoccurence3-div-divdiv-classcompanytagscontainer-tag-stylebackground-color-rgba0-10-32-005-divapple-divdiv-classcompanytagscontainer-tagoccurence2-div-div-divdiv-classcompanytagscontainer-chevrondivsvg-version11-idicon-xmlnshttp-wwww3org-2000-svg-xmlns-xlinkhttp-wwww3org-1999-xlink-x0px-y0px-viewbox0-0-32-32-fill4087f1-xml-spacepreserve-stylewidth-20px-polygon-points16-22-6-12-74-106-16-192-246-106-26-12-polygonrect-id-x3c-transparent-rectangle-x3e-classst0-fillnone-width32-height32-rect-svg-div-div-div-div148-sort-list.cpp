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
        private:
      ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* t1 = list1;
        ListNode* t2 = list2;
        ListNode* dumy = new ListNode(-1);
        ListNode* temp= dumy;
        while (t1!= NULL && t2!= NULL){
            if (t1-> val > t2-> val ){
                temp -> next = t2;
                temp = t2;
                t2 = t2-> next;
            }
            else{
                temp -> next = t1;
                temp = t1;
                t1 = t1-> next;
            }
            
        }
        if (t1)temp -> next = t1;
        else temp -> next = t2;
        ListNode* head = dumy-> next;
        delete dumy;
        return head;
    }
    private:
    ListNode* middlenode(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head -> next;
        while (fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next ;
        }
        return slow;
    }
public:
    ListNode* sortList(ListNode* head) {
       if (head == NULL || head-> next == NULL)return head;
        ListNode* middle = middlenode(head);
        ListNode* start = head;
        ListNode* end= middle -> next;
        middle -> next = NULL;
        
        start = sortList(start);
        end = sortList(end);
        return mergeTwoLists (start,end);
    }
};