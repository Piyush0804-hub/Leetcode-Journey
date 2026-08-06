class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> mp;
        for(char ch:s){
            mp[ch]++;
        }
        for(int i=0; i<s.length(); i++){
            for(auto it:mp){
                if(it.first==s[i] && it.second==1){
                    return i;
                }
            }
        }
        return -1;
    }
};