class Solution {
public:
    int maximumLengthSubstring(string s) {
        int maxx=0;
        for(int i=0; i<s.length(); i++){
            unordered_map<char, int> mp;
            for(int j=i; j<s.length(); j++){
                if(mp[s[j]]<2){
                    mp[s[j]]++;
                    maxx=max(maxx, j-i+1);
                }
                else{
                    break;
                }
            }
        }
        return maxx;
    }
};