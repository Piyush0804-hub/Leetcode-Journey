class Solution {
public:
    int missingNumber(vector<int>& nums) {
        map<int, int> mp;
        int ans=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }
        for(int i=0; i<=nums.size(); i++){
            if(mp[i]==0){
                ans=i;
                break;
            }
        }
        return ans;
    }
};