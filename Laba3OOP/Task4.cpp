#include <iostream>
#include <cmath>
using namespace std;
namespace forLoop {
    int findFirstElement(double eps)
    {
        double a;
        int i;
        for (i = 0;; ++i) {
            a = pow(-1, i) * ((1 + (3 * i)) / pow(3, i));
            if (abs(a) <= eps)
                break;
        }
        return i;
    }
}