// Last updated: 11/19/2025, 12:27:52 AM
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        if(arr.size() == 2){
            return true;
        }
        if(arr.size() < 3){
            return false;
        }
        
        bool can_make = true;
        int curr_diff = 0;
        int diff = 0;
        
        sort(arr.begin(), arr.end());
        
        curr_diff = arr[0] - arr[1];
        for(int i = 0; i < arr.size() - 1; i++){
            diff = arr[i] - arr[i + 1];
            
            if(diff != curr_diff){
                can_make = false;
                break;
            }
        }
        return can_make;
    }
};