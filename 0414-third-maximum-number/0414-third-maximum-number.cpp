class Solution {
public:
    int thirdMax(vector<int>& nums) {
        map<int, int> m;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        if(m.size()>=3){
            auto it=next(m.rbegin(),2);
            return it->first;
        }
        return m.rbegin()->first;
    }
};