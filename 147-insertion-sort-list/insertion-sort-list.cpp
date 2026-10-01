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
    ListNode* insertion(ListNode*head,vector<int>arr){
        int n=arr.size();
        for(int i=1;i<n;i++){
            int j=i;
            while(j>0 && arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
                j--;
            }
        }
        ListNode* temp=head;
        int i=0;
        while(temp){
            temp->val=arr[i];
            i++;
            temp=temp->next;
        }
        return head;
    }
    ListNode* insertionSortList(ListNode* head) {
        ListNode*temp=head;
        vector<int>arr;
        while(temp){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        temp=head;
        return insertion(temp,arr);
    }
};