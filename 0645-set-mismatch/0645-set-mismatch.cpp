class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto it:nums){
            mp[it]++;
        }
        int dup=-1;
        int zer=-1;
        for(auto it:mp){
            if(it.second==2){
                dup=it.first;
                break;
            }
        }
        vector<int> ans;
        ans.push_back(dup);
        for(int i=1; i<nums.size()+1; i++){
            if(mp[i]==0){
                zer=i;
                break;
            }
        }
        ans.push_back(zer);
        return ans;
    }
};