#include <cmath>
#include <iostream>
using namespace std;
namespace doWhileLoop {
    double sum(int n) {
        double a, summ;
        summ = 0;
        int i = 0;
        do {
            a = pow(-1, i) * ((1 + (3 * i)) / pow(3, i));
            summ += a;
            i++;
        } while (i <= n - 1);
        return summ;
    }
}