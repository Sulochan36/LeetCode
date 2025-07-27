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
public:
    Node* copyRandomList(Node* head) {
        Node* temp =NULL;
        Node* copyNode = NULL;
        Node* dummy = new Node(-1);
        temp = head;
        while(temp!=NULL){
            copyNode = new Node(temp->val);
            copyNode -> next = temp -> next;
            temp->next = copyNode;
            temp = temp->next->next;
        }

        temp = head;
        while(temp!=NULL){
            copyNode = temp->next;
            if(temp->random == NULL){
                copyNode->random = NULL;
            }
            else{
                copyNode->random = temp->random->next;
            }
            temp=temp->next->next;
        }

        Node* res = dummy;
        temp = head;
        while(temp!=NULL){
            res->next = temp->next;
            temp->next = temp->next->next;
            res=res->next;
            temp = temp->next;
        }
        return dummy->next;
    }
};