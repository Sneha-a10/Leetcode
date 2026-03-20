// Last updated: 3/20/2026, 5:13:31 PM
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
13    ListNode* addTwoNumbers(ListNode* t1, ListNode* t2) 
14    {
15        ListNode *t = new ListNode(-1), *temp = t;
16
17        int carry = 0;
18        while(t1 || t2 || carry)
19        {
20            int s = carry;
21            if(t1)
22            {
23                s += t1->val;
24                t1 = t1->next;
25            }
26            if(t2)
27            {
28                s += t2->val;
29                t2 = t2->next;
30            }
31
32            temp->next = new ListNode(s%10);
33            temp = temp->next;
34
35            carry = s/10;
36        }
37        return t->next;
38    }
39};