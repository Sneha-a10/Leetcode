// Last updated: 10/8/2025, 1:03:31 PM
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