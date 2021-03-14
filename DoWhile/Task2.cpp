#include <cmath>
#include <iostream>
using namespace std;
namespace doWhileLoop {
    double sum2(double eps) {
        double a, summ;
        int i = 0;
        a = pow(-1, i) * ((1 + (3 * i)) / pow(3, i));
        summ = a;
        do {
            i++;
            a = pow(-1, i) * ((1 + (3 * i)) / pow(3, i));
            summ += a;
        } while (abs(a) >= eps);
        return summ;
    }
}