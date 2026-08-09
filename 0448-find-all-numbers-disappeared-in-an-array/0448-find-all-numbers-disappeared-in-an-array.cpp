class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto it:nums){
            mp[it]++;
        }
        vector<int> ans;
        int n=nums.size();
        for(int i=1; i<n+1; i++){
            if(mp[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};