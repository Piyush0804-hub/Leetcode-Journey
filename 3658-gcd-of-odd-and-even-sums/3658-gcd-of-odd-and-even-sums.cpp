class Solution {
public:
    int gcdd(int a, int b){
            if(a==b){
                return a;
            }
            else if(a>b){
                return gcdd(a-b, b);
            }
            else{
                return gcdd(a, b-a);
            }
    }
    int gcdOfOddEvenSums(int n) {
        int even=0;
        int odd=0;
        for(int i=1; i<=n*2; i++){
            if(i%2!=0){
                odd+=i;
            }
            else{
                even+=i;
            }
        }
        return gcdd(even,  odd);
        
    }
};