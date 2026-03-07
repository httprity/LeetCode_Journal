class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int>count;
        int operations=0;
        for(int x:nums){
            int target=k-x;
            if(count[target]>0){
                operations++; //means i got a pair
                count[target]--;
            }else{
                    count[x]++;
            }
        }
        return operations;
    }
};