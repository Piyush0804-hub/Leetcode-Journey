class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int len=nums.size();
        int max=INT_MIN;
        for(int i=0; i<len; i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            if(it.second>(len/2)){
                max=it.first;
            }
        }
        return max;
    }
};