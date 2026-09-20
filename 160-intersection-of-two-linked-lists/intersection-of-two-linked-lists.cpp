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
        ListNode *longer=headA;
        if(count1>count2){
            ListNode *shorter=headB;
            int i=0;
            while(longer && i<gap){
                i++;
                longer=longer->next;
            }
            while(shorter){
                if(shorter == longer){
                    return longer;
                }
                shorter=shorter->next;
                longer=longer->next;
            }
        }else{
            ListNode *shorter=headB;
            int i=0;
            while(shorter && i<gap){
                i++;
                shorter=shorter->next;
            }
            while(longer){
                if(shorter == longer){
                    return longer;
                }
                longer=longer->next;
                shorter=shorter->next;
            }
        }
        return NULL;
    }
};