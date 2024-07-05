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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int first = -1;
        int  second = -1;
        int cnt = 1;
        if (head == NULL || head -> next == NULL || head -> next-> next == NULL){
            return {-1,-1};

        }
        ListNode* curr = head -> next;
        ListNode* prev = head;
        int mindis = INT_MAX;
        int maxdis = INT_MIN;
        bool value = false;
        while (curr->next){
            if ((curr -> val > prev -> val && curr -> val > curr-> next-> val) || (curr-> val<prev-> val && curr-> val < curr-> next-> val)  ){
                if (first == -1){
                    first = cnt;
                    

                }
                else{
                   mindis = min(mindis,cnt-second);
                }
                second = cnt;
                value = true;
        }
        prev = curr;
        curr = curr->next;
        cnt++;
        
    }
    if(!value || first == second){
        return {-1,-1};
    }
    maxdis = max(maxdis,second - first);
    return {mindis,maxdis};
    }
};