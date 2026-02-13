// Last updated: 2/13/2026, 12:57:08 PM
class Solution {
public:
    int compress(vector<char>& chars) 
    {
        int r = 0, w = 0;
        for(;r<chars.size();r++)
        {
            int c = 1;
            while(r< chars.size()-1 && chars[r]==chars[r+1]) 
            {
                r++; c++;
            }
            chars[w] = chars[r];
            w ++;
            if(c > 1) 
                for( char ch :to_string(c))
                {
                    chars[w] = ch;
                    w++;
                }
        }
        return w;
    }
};