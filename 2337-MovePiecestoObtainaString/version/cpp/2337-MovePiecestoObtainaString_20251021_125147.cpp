// Last updated: 10/21/2025, 12:51:47 PM
class Solution {
public:
    bool canChange(string start, string target)
    {
        int s = 0, t = 0;
        if(start.size()!= target.size())
            return false;

        while(s<start.size() || t<start.size())
        {
            while(s<start.size() && start[s]== '_') s++;
            while(t<target.size() && target[t] == '_') t++;

            if(start[s] == target[t])
            {
                if ((start[s] == 'L' && s<t) || (start[s] == 'R' && s>t))
                    return false;
            }
            else
                return false;
            s++;
            t++;
        }
        return true;
    }
};