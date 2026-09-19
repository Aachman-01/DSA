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
    ListNode*reverseLinkedlist(ListNode*temp){
        if(temp==NULL || temp->next==NULL) return temp;
            ListNode*newHead=reverseLinkedlist(temp->next);
            ListNode*front=temp->next;
            front->next=temp;
            temp->next=NULL;
        return newHead;
    }

    ListNode* getkthnode(ListNode*temp,int k){
        k=k-1;
        while(temp && k>0){
            k--;
            temp=temp->next;
        }
        return temp;
    }


    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode*prevlast=NULL;
        while(temp){
            ListNode*kthnode=getkthnode(temp,k);
            if(kthnode==NULL){
                if(prevlast) prevlast->next=temp;
                break;
            }
            ListNode*nextnode=kthnode->next;
            kthnode->next=NULL;
            reverseLinkedlist(temp);
            if(temp==head){
                head=kthnode;
            }else{
                prevlast->next=kthnode;
            }
            prevlast=temp;
            temp=nextnode;
        }
        return head;
    }
};