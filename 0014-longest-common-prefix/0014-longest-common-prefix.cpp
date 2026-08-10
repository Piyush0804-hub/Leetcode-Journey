class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string out="";
        for(int i=0; i<strs.size(); i++){
            if(i==0){
                out=strs[0];
                continue;
            }
            string strr=strs[i];
            if(out.length()>strr.length()){
                out=strr;
            }
        }
        int n=out.length();
        for(int i=0; i<strs.size(); i++){
            string sample=strs[i];
            for(int j=0; j<out.length(); j++){
                if(out[j]!=sample[j]){
                    out.erase(j);
                }
            }
        }
        return out;

    }
};