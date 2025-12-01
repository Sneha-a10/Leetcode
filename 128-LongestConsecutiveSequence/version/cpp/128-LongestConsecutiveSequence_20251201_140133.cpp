// Last updated: 12/1/2025, 2:01:33 PM
class Solution {
public:

    /* method-1 O(nlogn) */
    int long_seq_01(vector<int> & nums) {
        int size = nums.size();
        int current_seq = 1, longest_seq = 0;

        std::sort(nums.begin(), nums.end());

        for(int i=1; i<size; i++) {
            if(nums[i] != nums[i-1]) {
                if(nums[i] == nums[i-1] + 1) {
                    current_seq++;
                }
                else {
                    longest_seq = max(current_seq, longest_seq);
                    current_seq = 1;
                }
            }
        }

        return max(current_seq, longest_seq);
    }

    /* method-2 O(n) */
    int long_seq_02(vector<int> & nums) {
        unordered_map<int, bool> mp;
        
        for (auto i : nums) {
            mp[i] = true;
        }
        
        for (auto i : nums) {
            if (mp.find(i - 1) != mp.end()) {
                mp[i] = false;
            }
        }
        
        int count = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            if (mp[nums[i]]) {
                int j = 0;
                
                while(mp.count(nums[i]+j) > 0){
                    j++;
                }
                
                count = max(count, j);
            }
        }
        
        return count;
    }

    /* method-3 O(n) */
    int long_seq_03(vector<int> & nums) {
        
        if(nums.size() == 0) return 0;

        int n = nums.size();
        int smallest = INT_MIN;
        int c = 1;
        int longest = 0;

        std::sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {
            if(nums[i]-1 == smallest) {
                c++;
            }
            else if(smallest != nums[i]) {
                c = 1;
            }

            smallest = nums[i];
            longest = max(c, longest);     
        }
        
        return longest;
    }

    int longestConsecutive(vector<int>& nums) {

        if(nums.size() <= 1) {
            return nums.size();
        }

        //int max_sequence = long_seq_01(nums);
        //int max_sequence = long_seq_02(nums);
        int max_sequence = long_seq_03(nums);


        return max_sequence;
    }
};