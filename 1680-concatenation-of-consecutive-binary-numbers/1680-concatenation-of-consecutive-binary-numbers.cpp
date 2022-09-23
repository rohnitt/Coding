class Solution {
public:
    int concatenatedBinary(int n) {
        long long int prev = 0;
        int i=1;
        while(i<=n)
        {
            prev = ((prev << (1+int(log2(i))))%1000000007 + i)%1000000007; // previous value will be left shifted by current digit of (i) and add current 'i'--i.e  (prev << digitof(i) + i)
           // digit of i= 1+log2(i);
            i+=1;
        }
        return prev;
    }
};