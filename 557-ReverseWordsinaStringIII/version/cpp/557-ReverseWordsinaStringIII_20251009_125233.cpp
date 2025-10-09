// Last updated: 10/9/2025, 12:52:33 PM
class Solution {
public:
    string reverseWords(string s) 
    {
        istringstream iss(s);
        string word;
        string ans;
        while(iss >> word)
        {
            int i = 0, j = word.size()-1;
            while(i<j)
            {
                swap(word[i],word[j]);
                i++;j--;
            }

            ans += word;
            ans += " ";
        }
        
        ans.pop_back();
        return ans;
    }
};