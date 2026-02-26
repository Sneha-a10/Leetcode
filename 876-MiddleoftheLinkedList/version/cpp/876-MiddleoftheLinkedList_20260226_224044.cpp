// Last updated: 2/26/2026, 10:40:44 PM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* middleNode(ListNode* head) 
14    {
15        ListNode *mid = head, *end = head;
16        while(end && end->next!= nullptr)
17        {
18            mid = mid->next;
19            end = end->next->next;
20        }
21        return mid;
22    }
23};