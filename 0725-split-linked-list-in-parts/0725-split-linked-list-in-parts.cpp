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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int len = 0;
        ListNode* temp = head;
        while (temp){
          len ++;
          temp = temp-> next;
        }
        vector <ListNode*> ans(k,NULL);
        int part = len/k;
        int rem = len%k;
        ListNode* temp1 = head;
        for (int i = 0;i< k && temp1;i++){
            ans[i] = temp1;
            int curr = part+(i<rem?1:0);
            for (int j =1;j<curr ;j++){
                if (temp1) temp1=temp1-> next;
            }

            ListNode* temp2 = temp1-> next;
            temp1-> next = NULL;
            temp1 = temp2;
        }
        return ans;
    }

};