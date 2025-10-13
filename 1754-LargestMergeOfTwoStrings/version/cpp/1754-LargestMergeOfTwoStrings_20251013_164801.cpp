// Last updated: 10/13/2025, 4:48:01 PM
class Solution {
public:
    string largestMerge(string word1, string word2) 
    {
        string merge;
        while(word1.size()>0 || word2.size()>0)
        {
            if(word1>=word2)
            {
                merge += word1[0];
                word1.erase(0,1);
            }
            else if(word1<word2)
            {
                merge += word2[0];
                word2.erase(0,1);
            }
        }
        return merge;
    }
};