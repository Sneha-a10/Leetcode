// Last updated: 10/9/2025, 12:45:49 PM
class Solution {
public:
    string reverseWords(string s) 
    {
        istringstream iss(s);
        vector<string> words;
        string word;
        while (iss >> word) 
            words.push_back(word);
        int i = words.size()-1;
        string ans;
        while(i>0)
        {
            ans += words[i];
            ans += " ";
            i --;
        }
        ans += words[0];
        return ans;
    }
};