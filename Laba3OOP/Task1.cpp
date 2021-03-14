#include <cmath>
#include <iostream>
using namespace std;
namespace forLoop {
    double sum(int n) {
        double a, summ;
        summ = 0;
        for (int i = 0; i <= n - 1; ++i) {
            a = pow(-1, i) * ((1 + (3 * i)) / pow(3, i));
            summ += a;
        }
        return summ;
    }
}