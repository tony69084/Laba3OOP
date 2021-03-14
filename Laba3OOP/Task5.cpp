#include <iostream>
#include <cmath>
using namespace std;
namespace forLoop {
    int findFirstNegativeElement(double eps)
    {
        double a;
        int i;
        for (i = 0;; ++i) {
            a = pow(-1, i) * ((1 + (3 * i)) / pow(3, i));
            if (a < 0 && abs(a) <= eps)
                return i;
        }
    }
}