#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;

        for (int i = 0; i < (int)nums1.size(); i++) {
            auto it = find(nums2.begin(), nums2.end(), nums1[i]);

            if (it == nums2.end()) {
                result.push_back(-1);
            } else {
                int val = *it;
                int ans=-1;

                for (auto jt = it + 1; jt != nums2.end(); ++jt) {
                    if(val<*jt){
                    ans=*jt;
                    break;
                    }
                }

                result.push_back(ans);
            }
        }

        return result;
    }
};
