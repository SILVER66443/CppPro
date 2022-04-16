#include <iostream>

double pow(double x, int n) {
    long long N = n;
    double ans  = 1.0;

    while (N) {
        if (N & 1) {
            ans *= x;
        }
        x  *= x;
        N >>= 1;
    }
    return n < 0?1 / ans:ans;
}
