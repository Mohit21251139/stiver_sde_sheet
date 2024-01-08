/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
    private:
    void insertCopyNode(Node* head){
        Node* temp = head;
        while (temp!= NULL){
            Node* nextElement = temp-> next;
            Node* copy = new Node(temp-> val);
            copy-> next = nextElement;
            temp-> next = copy;
            temp = nextElement;
        }
    }
    
   void connectPointer(Node* head){
       Node* temp = head;
       while (temp!= NULL){
           Node* copynode = temp-> next;
           if (temp-> random){
               copynode-> random = temp-> random -> next;
           }
           else{
               copynode -> random = NULL;
           }
         temp = temp-> next -> next;   
       }
       
   }
    Node* getcopylist(Node* head){
        Node* temp = head;
        Node* dumy = new Node(-1);
        Node* res = dumy;
        while (temp!= NULL){
            //creating new list
            res-> next = temp-> next;
            res = res-> next;
            
            //disconnect from privous one
            temp->next = temp-> next -> next;
            temp = temp-> next;
        }
        return dumy-> next;
        
    }
public:
    Node* copyRandomList(Node* head) {
        insertCopyNode(head);
        connectPointer (head);
        return getcopylist (head);
    }
};