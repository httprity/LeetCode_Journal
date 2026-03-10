class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>count;

        for(int i=0;i<arr.size();i++){
            count[arr[i]]++;
        }
        unordered_set<int> seen;

        for(auto it : count){
            if(seen.count(it.second)){
                return false;
            }
            seen.insert(it.second);
        }

       return true;
    }
};