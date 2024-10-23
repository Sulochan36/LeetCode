class Solution {

private:
    double powHelper(double x, long long n) {
        if (n == 0) {
            return 1.0;
        }

        if (n % 2 == 0) {
            double half = powHelper(x, n / 2);
            return half * half;
        } else {
            return x * powHelper(x, n - 1); 
        }
    }
public:
    double myPow(double x, int n) {

        if(n==0){
            return 1;
        }

        if(n==1){
            return x;
        }

        if(n<0){
            n = abs(n);
            x = (1/x);
        }

        return powHelper(x, n);
    }
};