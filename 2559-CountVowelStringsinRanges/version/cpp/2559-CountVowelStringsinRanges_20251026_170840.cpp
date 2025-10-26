// Last updated: 10/26/2025, 5:08:40 PM
class Solution {
public:
    bool isvol (const string& word)
    {
        unordered_set<char> vol = {'a','e','i','o','u'};
        return vol.count(word[0])&& vol.count(word.back());
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) 
    {
        vector<int>res;
        for(int i=0; i<words.size(); i++)
            if(isvol(words[i]))
                res.push_back(i);
        
        vector<int> result;
      
        for (auto& query : queries) {
            int leftBound = query[0];
            int rightBound = query[1];
          
            int count = upper_bound(res.begin(), res.end(), rightBound) - 
                       lower_bound(res.begin(), res.end(), leftBound);
          
            result.push_back(count);
        }
      
        return result;
    }
};