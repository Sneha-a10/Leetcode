// Last updated: 3/12/2026, 11:28:54 AM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
12    {
13        unordered_map<ListNode* , int> mp;
14        ListNode *t1 = headA, *t2 = headB;
15        while(t1)
16        {
17            mp[t1] = t1->val;
18            t1 = t1->next;
19        }
20        while(t2)
21        {
22            if(mp.count(t2)) return t2;
23            t2 = t2->next;
24        }
25        return nullptr;
26    }
27};