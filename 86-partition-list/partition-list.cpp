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
        ListNode*temp=head;
        vector<int>arr;
        if(!head || !head->next) return head;
        while(temp!=NULL){
            if(x>temp->val){
                arr.push_back(temp->val);
            }
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL){
            if(x<=temp->val){
                arr.push_back(temp->val);
            }
            temp=temp->next;
        }
        int i=0;temp=head;
        while(temp!=NULL){
            temp->val=arr[i];
            i++;
            temp=temp->next;
        }
        return head;
    }
};