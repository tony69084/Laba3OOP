#include <iostream>
#include <cmath>
#include "../func.h"
using namespace std;
namespace whileLoop {
    int findFirstElement(double eps)
    {
        double a;
        int i = 0;
        while (i <= numeric_limits<int>::max()) {
            a = pow(-1, i) * ((1 + (3 * i)) / pow(3, i));
            if (abs(a) <= eps)
                break;
            else
                i++;
        }
        return i;
    }
}