// Last updated: 1/27/2026, 12:01:19 AM
1class Solution {
2public:
3    string nextTerm(string s)
4    {
5        string str;
6        for(int i = 0; i<s.size(); i++)
7        {
8            int k = 1;
9            while(i<s.size()-1 && s[i]==s[i+1])
10            {
11                i++;
12                k++;
13            }
14            str += to_string(k);
15            str += s[i];
16        }
17        return str;
18    }
19    string countAndSay(int n) 
20    {
21        string s = "1";
22        if(n == 1)
23        return s;
24
25        for(int i=1; i<n; i++)
26        {
27            s = nextTerm(s);
28        }
29        return s;
30    }
31};