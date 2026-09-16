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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head || !head->next) return head;        vector<int>arr;
        ListNode*temp=head;
        while(temp){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        left--; 
        right--;
        while(left<=right){
            swap(arr[left++],arr[right--]);
        }
        int i=0;
        temp=head;
        while(temp){
            temp->val=arr[i];
            i++;
            temp=temp->next;
        }
        return head;
    }
};