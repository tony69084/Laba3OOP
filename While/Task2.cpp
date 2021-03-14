#include <cmath>
#include <iostream>
#include "../func.h"
using namespace std;
namespace whileLoop {
    double sum2(double eps) {
        double a, summ;
        int i = 0;
        a = pow(-1, i) * ((1 + (3 * i)) / pow(3, i));
        summ = a;
        while (abs(a) >= eps) {
            i++;
            a = pow(-1, i) * ((1 + (3 * i)) / pow(3, i));
            summ += a;
        }
        return summ;
    }
}