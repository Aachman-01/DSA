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
        ListNode *collisionpoint(ListNode *l1,ListNode *l2,int gap){
            while(gap){
                gap--;
                l2=l2->next;
            }
            while (l1 && l2) {
                if (l1 == l2) return l1;
                    l1 = l1->next;
                    l2 = l2->next;
            }
            return NULL;
        }

        ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
            ListNode* temp=headA;
            int count1=0,count2=0;
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
            ListNode *longer=headA;
            ListNode *shorter=headB;
            if(count1>count2){
                return collisionpoint(shorter,longer,gap);
            }else{
                return collisionpoint(longer,shorter,gap);
            }
        }
    };