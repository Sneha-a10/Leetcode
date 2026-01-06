// Last updated: 1/6/2026, 9:55:19 PM
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int num1 ,num2;
        int cunt1 = 0,cunt2 = 0,n = nums.size();
        for(auto it:nums){
            if((cunt1 == 0 || num1 == it) && it!=num2){
                num1 = it;
                cunt1++;
            }
            else if(cunt2 == 0 || num2 == it){
                num2 = it;
                cunt2++;
            }
            else{
                cunt1--;
                if(cunt1 < 0){
                    num1 = it;
                    cunt1 = 1;
                }
                cunt2--;
                if(cunt2 < 0){
                    num2 = it;
                    cunt2 = 1;
                }
            }
        }
        cout<<num1<<" "<<num2<<" "<<cunt1<<" "<<cunt2<<" "<<(n/3);
        int temp = 0;
        vector<int> soluchan;
        for(auto it:nums)if(it == num1)temp++;
        if(temp>(n/3))soluchan.push_back(num1);
        temp = 0;
        if(num2!=num1){
            for(auto it:nums)if(it == num2)temp++;
            if(temp>(n/3))soluchan.push_back(num2);
        }
        return soluchan;
        
    }
};