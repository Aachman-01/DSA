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
    ListNode* partition(ListNode* head, int x) {
        ListNode* t1=new ListNode(-1);
        ListNode*t1tail=t1;
        ListNode* t2=new ListNode(-1);
        ListNode*t2tail=t2;
        ListNode*temp=head;
        while(temp!=NULL){
            if(x>temp->val){
                ListNode* nodetoinsert=temp;
                temp=temp->next;
                nodetoinsert->next=NULL;
                t1tail->next=nodetoinsert;
                t1tail=nodetoinsert;
            }
            else{
                ListNode* nodetoinsert=temp;
                temp=temp->next;
                nodetoinsert->next=NULL;
                t2tail->next=nodetoinsert;
                t2tail=nodetoinsert;
            }
        }
        t1tail->next=t2->next;
        t2->next=NULL;
        t1=t1->next;
        return t1;
    }
};