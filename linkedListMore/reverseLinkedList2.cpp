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
class Solution
{
public:
    ListNode *reverseBetween(ListNode *head, int left, int right)
    {
        vector<int> v;
        int i = 1;
        ListNode *current = head;
        while (current != nullptr)
        {
            if (i >= left && i <= right)
            {
                v.push_back(current->val);
            }
            i++;
            current = current->next;
        }
        i = 1;
        current = head;
        while (current != nullptr)
        {
            if (i >= left && i <= right)
            {
                current->val = v[right - i];
            }
            i++;
            current = current->next;
        }
        return head;
    }
};