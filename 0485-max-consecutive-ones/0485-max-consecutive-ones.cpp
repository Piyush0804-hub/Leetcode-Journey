class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        vector<int> v;
        for(auto it:nums){
            if(it==1){
                count++;
            }
            else if(it==0){
                v.push_back(count);
                count=0;
            }
        }
        v.push_back(count);
        int maxx=INT_MIN;
        for(int i=0; i<v.size(); i++){
            maxx=max(maxx,v[i]);
        }
        return maxx;
    }
};