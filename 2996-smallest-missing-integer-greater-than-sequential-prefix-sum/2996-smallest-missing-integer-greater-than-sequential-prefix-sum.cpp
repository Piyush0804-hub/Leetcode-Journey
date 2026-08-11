class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto it:nums){
            mp[it]++;
        }
        int n=nums[0];
        int count=1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]==n+1){
                count++;
                n++;
            }
            else{
                break;
            }
        }
        int sum=nums[0];
        for(int i=1; i<count; i++){
            sum=sum+nums[i];
        }
        if(mp[sum]==0){
            return sum;
        }
        while(mp[sum]!=0){
            sum++;
        }
        return sum;
    }
};