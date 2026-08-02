class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long maxstrength=0;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                long long g=gcd(nums[i], nums[j]);
                long long strength=((long long)nums[i]*nums[j])/(g*g);
                maxstrength=max(maxstrength, strength);
            }
        }
        return maxstrength;
    }
};