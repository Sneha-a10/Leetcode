// Last updated: 2/13/2026, 12:56:08 PM
class Solution {
public:
    string reversePrefix(string word, char ch) 
    {
        int i = word.find(ch);
        for(int k = 0, j = i; k<j; k++,j--)
        swap(word[k],word[j]);
        return word;
    }
};