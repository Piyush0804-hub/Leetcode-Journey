class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int multiple=k;
        for(int i:nums){
            mp[i]++;
        }
        
        while(mp[multiple]!=0){
            multiple+=k;
        }
        return multiple;
    }
};