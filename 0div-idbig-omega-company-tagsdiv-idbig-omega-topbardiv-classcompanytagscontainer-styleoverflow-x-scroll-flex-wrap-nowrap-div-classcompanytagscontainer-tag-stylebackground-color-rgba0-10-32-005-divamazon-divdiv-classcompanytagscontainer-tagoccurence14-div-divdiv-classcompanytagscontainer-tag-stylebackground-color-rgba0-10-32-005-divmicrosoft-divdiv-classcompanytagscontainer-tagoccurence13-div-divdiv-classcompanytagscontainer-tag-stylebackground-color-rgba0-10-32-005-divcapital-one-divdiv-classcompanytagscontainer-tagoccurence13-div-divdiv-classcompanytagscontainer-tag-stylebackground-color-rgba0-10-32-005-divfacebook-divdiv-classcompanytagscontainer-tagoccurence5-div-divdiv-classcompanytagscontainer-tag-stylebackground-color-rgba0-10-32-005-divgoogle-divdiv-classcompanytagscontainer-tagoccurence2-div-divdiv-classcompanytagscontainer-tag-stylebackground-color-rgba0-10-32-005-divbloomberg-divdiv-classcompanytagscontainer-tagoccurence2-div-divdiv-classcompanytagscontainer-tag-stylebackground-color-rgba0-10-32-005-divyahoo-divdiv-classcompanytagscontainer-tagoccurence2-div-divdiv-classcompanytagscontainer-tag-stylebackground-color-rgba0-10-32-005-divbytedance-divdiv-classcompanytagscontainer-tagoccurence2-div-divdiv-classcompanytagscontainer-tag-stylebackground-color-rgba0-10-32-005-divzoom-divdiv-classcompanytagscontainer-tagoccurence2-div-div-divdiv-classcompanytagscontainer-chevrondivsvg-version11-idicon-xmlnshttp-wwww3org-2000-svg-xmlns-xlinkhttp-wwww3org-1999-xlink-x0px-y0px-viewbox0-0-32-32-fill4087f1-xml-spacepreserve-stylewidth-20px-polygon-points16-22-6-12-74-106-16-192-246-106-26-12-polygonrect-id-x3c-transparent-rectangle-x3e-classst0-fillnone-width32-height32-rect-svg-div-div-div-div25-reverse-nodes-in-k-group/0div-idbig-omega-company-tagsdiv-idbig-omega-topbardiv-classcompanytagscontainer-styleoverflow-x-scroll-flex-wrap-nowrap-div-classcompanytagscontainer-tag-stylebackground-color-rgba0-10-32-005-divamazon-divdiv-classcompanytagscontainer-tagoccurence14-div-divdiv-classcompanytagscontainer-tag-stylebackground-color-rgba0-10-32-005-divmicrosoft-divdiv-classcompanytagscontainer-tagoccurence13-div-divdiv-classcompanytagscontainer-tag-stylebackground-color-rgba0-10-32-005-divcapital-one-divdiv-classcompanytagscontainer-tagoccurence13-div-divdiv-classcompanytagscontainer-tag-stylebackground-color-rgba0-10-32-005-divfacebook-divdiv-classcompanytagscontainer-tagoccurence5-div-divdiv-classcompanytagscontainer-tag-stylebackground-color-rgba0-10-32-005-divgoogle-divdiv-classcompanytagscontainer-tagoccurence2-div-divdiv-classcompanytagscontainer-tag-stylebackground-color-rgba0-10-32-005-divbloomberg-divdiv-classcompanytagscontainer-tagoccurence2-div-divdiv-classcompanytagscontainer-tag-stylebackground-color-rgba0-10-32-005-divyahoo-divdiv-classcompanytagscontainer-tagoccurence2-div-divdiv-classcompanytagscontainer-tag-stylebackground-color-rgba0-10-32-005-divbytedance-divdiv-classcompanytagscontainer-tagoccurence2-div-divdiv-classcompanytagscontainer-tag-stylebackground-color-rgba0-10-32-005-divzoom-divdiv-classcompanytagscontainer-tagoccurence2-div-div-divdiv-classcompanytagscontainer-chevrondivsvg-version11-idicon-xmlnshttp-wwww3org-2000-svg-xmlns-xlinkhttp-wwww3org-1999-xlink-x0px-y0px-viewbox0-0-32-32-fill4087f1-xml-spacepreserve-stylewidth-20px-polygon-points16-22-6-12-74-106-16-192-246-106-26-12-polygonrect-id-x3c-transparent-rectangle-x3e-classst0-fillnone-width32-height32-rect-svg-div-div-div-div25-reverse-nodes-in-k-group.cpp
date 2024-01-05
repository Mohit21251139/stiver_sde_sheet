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
    ListNode* reverseList(ListNode* head){
        if (head == NULL || head -> next==NULL)return head;
        ListNode* prev = NULL;
        while (head!= NULL){
             ListNode* nextn = head-> next;
             head-> next = prev;
            prev  = head;
            head = nextn;
        }
        return prev;
       
    }
    private:
    ListNode* getKnode (ListNode* head,int k){
        k-= 1;
        while (head!= NULL && k>0){
            k --;
            head = head -> next;
        }
        return head;
    } 
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevnode = NULL;
        
        while (temp!= NULL){
            ListNode* kthnode = getKnode(temp,k);
            if (kthnode== NULL){
                if (prevnode)prevnode -> next = temp;
                break;
            }
            ListNode* nextnode = kthnode -> next;
            kthnode-> next = NULL;
            reverseList (temp);
            if (temp == head){
                head = kthnode;
            }
            else{
                prevnode -> next = kthnode;
            }
            prevnode = temp;
            temp = nextnode;
        }
        return head;
    }
};