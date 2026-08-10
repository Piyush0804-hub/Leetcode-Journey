class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;
        for(char ch:s){
            mp1[ch]++;
        }
        for(char ch:t){
            mp2[ch]++;
        }
        for(auto it:mp1){
            if(mp2[it.first]!=it.second){
                return false;
            }
        }
        return true;
    }
};