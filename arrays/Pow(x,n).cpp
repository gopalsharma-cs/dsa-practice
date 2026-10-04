// class Solution {
// public:
//     double myPow(double x, int n) {
//         double result=1;
    //     if(n>0){
    //         for(int i=0;i<n;i++){
    //             result*=x;
    //         }
    //         return result;
    //     }
    //     else if(n==0){
    //         return 1;
    //     }
    //     else {
    //         for(int i=0;i<(-n);i++){
    //             result*=x;
    //         }
    //         return 1/result;

    //     }
    // }
    class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;          // use long long so -INT_MIN doesn't overflow
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }
        double result = 1;
        while (N > 0) {
            if (N & 1) result *= x;   // odd bit -> multiply current power in
            x *= x;                   // square the base
            N >>= 1;                  // halve the exponent
        }
        // while (N > 0) {
        //     if (N % 2 == 1) {   // if N is odd
        //         result = result * x;
        //     }
        //     x = x * x;          // square the base
        //     N = N / 2;          // halve the exponent
        // }
        return result;
    }
};
