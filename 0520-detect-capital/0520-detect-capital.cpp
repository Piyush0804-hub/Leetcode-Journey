class Solution {
public:
    bool detectCapitalUse(string word) {

        int cap=0;
        int low=0;
        int len=word.length();
        for(char ch:word){
            if(isupper(ch)){
                cap++;
            }
            else if(islower(ch)){
                low++;
            }
        }
        if(cap==len || (cap=1 && low==len-1 && isupper(word[0])) || low==len  ){
            return true;
        }
        return false;
    }
};