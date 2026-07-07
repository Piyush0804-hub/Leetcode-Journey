class Solution {
public:
    long long sumAndMultiply(int n) {
        string s=to_string(n);
        string out="";
        for (char ch : s){
            if (ch!='0'){
                out.push_back(ch);
            }
        }
        if(out.empty()){
            return 0;
        }
        long long num=stoi(out);
        long long sum=0;
        long long demo=num;
        while(demo>0){
            int demo2=demo%10;
            sum+=demo2;
            demo/=10;
        }
        return num*sum;
    }
};