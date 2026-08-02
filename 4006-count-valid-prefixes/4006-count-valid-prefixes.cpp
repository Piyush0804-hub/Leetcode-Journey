class Solution {
public:
    int countValidPrefixes(string s) {
        int zeroo=0;
        int onee=0;
        int valid=0;
        for(char ch:s){
            if(ch=='0'){
                zeroo++;
            }
            else if(ch=='1'){
                onee++;
            }
            if(abs(zeroo-onee)<=1){
                valid++;
            }
        }
        return valid;
    }
};