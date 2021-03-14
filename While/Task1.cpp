#include <cmath>
#include <iostream>
#include "../func.h"
using namespace std;
namespace whileLoop {
    double sum(int n) {
        double a, summ;
        summ = 0;
        int i = 0;
        while (i <= n - 1) {
            a = pow(-1, i) * ((1 + (3 * i)) / pow(3, i));
            summ += a;
            i++;
        }
        return summ;
    }
}
