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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* fast = head;
        ListNode* first = nullptr;

        for (int i = 1; i < k; i++) {
            fast = fast->next;
        }
        first = fast;

        ListNode* slow = head;
        fast = fast->next;
        while (fast != nullptr) {
            slow = slow->next;
            fast = fast->next;
        }

        swap(first->val, slow->val);
        return head;
    }
};