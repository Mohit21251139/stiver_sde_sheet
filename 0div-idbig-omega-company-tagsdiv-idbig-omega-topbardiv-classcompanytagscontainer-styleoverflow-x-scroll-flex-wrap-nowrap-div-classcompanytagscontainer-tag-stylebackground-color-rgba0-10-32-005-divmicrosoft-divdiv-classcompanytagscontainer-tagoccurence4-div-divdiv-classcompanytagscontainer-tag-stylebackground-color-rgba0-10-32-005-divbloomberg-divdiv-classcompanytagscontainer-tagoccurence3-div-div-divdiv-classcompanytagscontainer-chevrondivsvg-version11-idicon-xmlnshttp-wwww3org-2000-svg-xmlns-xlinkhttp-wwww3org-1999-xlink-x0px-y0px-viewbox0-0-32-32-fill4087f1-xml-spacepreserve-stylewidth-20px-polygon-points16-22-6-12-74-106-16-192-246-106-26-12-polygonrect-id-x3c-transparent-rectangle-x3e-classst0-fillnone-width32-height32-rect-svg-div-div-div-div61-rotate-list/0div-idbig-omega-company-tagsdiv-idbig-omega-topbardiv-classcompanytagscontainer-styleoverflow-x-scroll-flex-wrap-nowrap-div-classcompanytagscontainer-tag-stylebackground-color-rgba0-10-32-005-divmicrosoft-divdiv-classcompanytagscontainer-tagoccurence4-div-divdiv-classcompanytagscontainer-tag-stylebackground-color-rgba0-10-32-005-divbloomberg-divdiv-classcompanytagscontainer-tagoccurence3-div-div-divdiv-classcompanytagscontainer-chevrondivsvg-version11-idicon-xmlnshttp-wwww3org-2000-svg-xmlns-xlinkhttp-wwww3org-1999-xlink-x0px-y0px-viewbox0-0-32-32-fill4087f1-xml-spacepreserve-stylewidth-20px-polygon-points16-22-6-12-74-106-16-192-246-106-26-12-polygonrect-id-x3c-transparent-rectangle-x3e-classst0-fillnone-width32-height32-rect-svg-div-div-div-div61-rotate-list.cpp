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
    ListNode* newNode (ListNode* head,int n){
    
        int cnt  = 1;
        while (head!= NULL){
            if (cnt == n)return head;
            head = head-> next;
            cnt ++;
        }
        return head;
    }
public:
    ListNode* rotateRight(ListNode* head, int k) {
         if (head == NULL || k == 0)return head;
        ListNode* tail = head;
        int cnt = 1;
        while (tail-> next != NULL){
            tail = tail-> next;
            cnt ++;
        }
        if (k%cnt == 0)return head;
        
        k = k%cnt;
        tail-> next = head;
       ListNode*  newTail   = newNode(head,cnt -k);
       head = newTail -> next;
       newTail -> next = NULL;
       return head;
    }
};