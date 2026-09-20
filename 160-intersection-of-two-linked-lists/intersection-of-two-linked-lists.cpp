/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp=headA;
        int count1=0;
        int count2=0;
        while(temp){
            count1++;
            temp=temp->next;
        }
        temp=headB;
        while(temp){
            count2++;
            temp=temp->next;
        }
        int gap=abs(count1-count2);
        int i=0;
        temp=headA;
        if(count1>count2){
            ListNode *temp1=headB;
            int i=0;
            while(temp && i<gap){
                i++;
                temp=temp->next;
            }
            while(temp1){
                if(temp1 == temp){
                    return temp;
                }
                temp1=temp1->next;
                temp=temp->next;
            }
        }else{
            ListNode *temp1=headB;
            int i=0;
            while(temp1 && i<gap){
                i++;
                temp1=temp1->next;
            }
            while(temp){
                if(temp1 == temp){
                    return temp;
                }
                temp=temp->next;
                temp1=temp1->next;
            }
        }
        return NULL;
    }
};