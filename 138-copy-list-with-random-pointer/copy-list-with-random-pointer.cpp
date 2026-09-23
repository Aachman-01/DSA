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
    void copyinbetween(Node* head){
        Node* temp=head;
        while(temp){
            Node* nextelement=temp->next;
            Node* copynode=new Node(temp->val);
            copynode->next=nextelement;
            temp->next=copynode;
            temp=nextelement;
        }
    }
    void connectRandom(Node* head){
        Node* temp=head;
        while(temp){
            Node*copynode=temp->next;
            if(temp->random){
                copynode->random=temp->random->next;
            }else{
                copynode->random=NULL;
            }
            temp=temp->next->next;
        }
    }
    Node* copiedLinkedlist(Node* head){
        Node* temp=head;
        Node* dummy=new Node(-1);
        Node*res=dummy;
        while(temp){
            res->next=temp->next;
            res=res->next;
            temp->next=temp->next->next;
            temp=temp->next;
        }
        return dummy->next;
    }
    Node* copyRandomList(Node* head) {
        copyinbetween(head);
        connectRandom(head);
        return copiedLinkedlist(head);
    }
};