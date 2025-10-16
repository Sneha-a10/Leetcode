// Last updated: 10/16/2025, 6:32:03 PM
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> ss;
        unordered_map<char,int> tt;

        for(auto s1 : s) ss[s1]++;
        for(auto t1 : t) tt[t1]++;

        // for(auto it : ss){
        //     if(ss[it.first] != tt[it.first]) return false;
        // }
        if(ss == tt) return true;
        return false;
    }
};