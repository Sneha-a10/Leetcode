// Last updated: 10/20/2025, 12:47:20 PM
class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int i=0;
        int j=0;
        int n=str1.size();
        int m=str2.size();
        if(m>n)
        return false;
        while(i<n&&j<m){
            if(str1[i]==str2[j]||str1[i]+1==str2[j]||str1[i]-25==str2[j]){
                j++;
            }
            i++;
        }

        return j==m;
    }
};