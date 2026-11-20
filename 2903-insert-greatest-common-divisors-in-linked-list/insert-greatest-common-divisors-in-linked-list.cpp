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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        vector<int> arr, ans;
        ListNode* temp = head;
        while (temp != nullptr) {
            arr.push_back(temp->val);
            temp = temp->next;
        }
        for (int i = 0; i < arr.size() - 1; i++) {
            ans.push_back(arr[i]);
            ans.push_back(gcd(arr[i], arr[i + 1]));
        }
        ans.push_back(arr.back());
        temp = head;
        for (int i = 0; i < ans.size(); i++) {
            temp->val = ans[i];
            if (i + 1 < ans.size() && temp->next == nullptr) {
                temp->next = new ListNode();
            }
            temp = temp->next;
        }
        return head;
    }
};