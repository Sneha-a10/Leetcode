// Last updated: 10/26/2025, 5:10:53 PM
class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) 
    {
        vector<int>res;
        unordered_set<char> vol = {'a','e','i','o','u'};
        for(int i=0; i<words.size(); i++)
            if(vol.count(words[i][0])&& vol.count(words[i].back()))
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