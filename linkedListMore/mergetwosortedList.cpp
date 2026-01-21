#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
    vector<int> arr;
    while (list1 != NULL)
    {
        arr.push_back(list1->val);
        list1 = list1->next;
    }
    while (list2 != NULL)
    {
        arr.push_back(list2->val);
        list2 = list2->next;
    }

    sort(arr.begin(), arr.end());

    ListNode *temp = nullptr;
    ListNode *head = temp;
    for (int i : arr)
    {
        ListNode *current = new ListNode(i);
        if (temp != nullptr)
        {
            temp->next = current;
            temp = current;
        }
        else
        {
            temp = current;
            head = temp;
        }
    }

    return head;
}

int main()
{
    ListNode *list1 = new ListNode(1);
    ListNode *a2 = new ListNode(2);
    ListNode *a3 = new ListNode(4);

    list1->next = a2;
    a2->next = a3;

    ListNode *list2 = new ListNode(1);
    ListNode *b2 = new ListNode(3);
    ListNode *b3 = new ListNode(4);

    list2->next = b2;
    b2->next = b3;

    ListNode *chain = mergeTwoLists(list1, list2);
    while (chain != nullptr)
    {
        cout << chain->val << " ";
        chain = chain->next;
    }

    return 0;
}