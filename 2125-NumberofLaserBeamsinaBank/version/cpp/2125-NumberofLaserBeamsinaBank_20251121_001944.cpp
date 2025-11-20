// Last updated: 11/21/2025, 12:19:44 AM
class Solution {
public:
    int numberOfBeams(vector<string>& bank) 
    {
        vector<int> cnt (bank.size());
        for(int i = 0; i< bank.size(); i++)
        {
            int  c = 0;
            for(int j = 0 ; j< bank[0].size(); j++)
                if (bank[i][j] == '1') c++;
            
            cnt[i] = c;  
        }
        int k = 0;
        int count = 0;
        for(int i = 0; i<bank.size(); i++)
        {
            if(cnt[i]>0)
            {
                if(k>0)
                    count += cnt[i] * k;
                k = cnt[i];
            }
        }      

        return count;

    }
};