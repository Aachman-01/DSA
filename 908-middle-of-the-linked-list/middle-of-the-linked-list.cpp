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
    ListNode* nexthalf(ListNode*temp,int mid){
        while(mid--){
            temp=temp->next;
        }
        return temp;
    }

    ListNode* middleNode(ListNode* head) {
        ListNode*temp=head;
        int count=0;
        while(temp){
            count++;
            temp=temp->next;
        }
        temp=head;
        if(count%2==1){
            int mid=(count+1)/2;
            return nexthalf(temp,mid-1);
        }
        else{
            int mid=count/2;
            return nexthalf(temp,mid);
        }
    }
};