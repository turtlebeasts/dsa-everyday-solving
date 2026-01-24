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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> nums;
        ListNode* result = nullptr;
        for(ListNode* current: lists){
            while(current!=nullptr){
                nums.push_back(current->val);
                current=current->next;
            }
        }
        sort(nums.begin(), nums.end());
        ListNode* head = nullptr;
        for(int i: nums){
            ListNode* temp = new ListNode(i);
            if(result==nullptr){
                result=temp;
                head=result;
            }else{
                result->next=temp;
                result=result->next;
            }
        }
        return head;
    }
};