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
    ListNode* reverseList(ListNode* l1) {
        ListNode*temp=l1;
        ListNode*prev=NULL;
        while(temp!=NULL){
            ListNode*front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        return prev;
    }

    void reorderList(ListNode* head) {
        ListNode*temp=head;
        ListNode* ptr=head;
        while(temp && temp->next){
            ptr=ptr->next;
            temp=temp->next->next;
        }
        ListNode*rev=reverseList(ptr);
        ListNode*curr=head;
        while(rev->next){
            ListNode*tempcurr=curr->next;
            curr->next=rev;
            ListNode*temprev=rev->next;
            rev->next=tempcurr;
            curr=tempcurr;
            rev=temprev;
        }
    }
};