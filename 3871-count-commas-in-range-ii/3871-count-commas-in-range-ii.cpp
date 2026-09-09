class Solution {
public:
    long long countCommas(long long n) {
        if(n<1000){
            return 0;
        }
        long long count=0;
       if(n==1000000000000000){
            count+=5;
            n-=1;
        }
        if(n>999999999999){
            long long i=n-999999999999;
            count+=i*4;
            n-=i;
        }
        if(n>999999999){
            long long i=n-999999999;
            count+=i*3;
            n-=i;
        }
        if(n>999999){
            long long i=n-999999;
            count+=i*2;
            n-=i;
        }
        if(n>999){
            long long i=n-999;
            count+=i*1;
        }
        return count;
    }
};