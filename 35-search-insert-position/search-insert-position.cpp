class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int idx = 0;
        int min_value = 0;
        vector<int> diff(nums.size(), INT_MAX);
        for (int i = 0; i < nums.size(); i++) {
            if (target == nums[i]) {
                idx = i;
                return idx;
            } else {
                if (nums[i] > target) {
                    diff[i] = nums[i] - target; // positive difference only
                }
            }
        }
        auto it = min_element(diff.begin(), diff.end());
        if (*it == INT_MAX) return nums.size();
        return (int)(it - diff.begin());

    }
}; 

//idk why did i take the hardest approach :(( here's the easier one
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int idx = 0;
        int min_value = 0;
        vector<int> diff(nums.size(), INT_MAX);
        for (int i = 0; i < nums.size(); i++) {
            if (target == nums[i]) {
                idx = i;
                return idx;
            } else {
                if (nums[i] > target) {
                     idx=i;
                     break;
                }
                idx=nums.size();
            }
        }
        return idx;
    }
};
