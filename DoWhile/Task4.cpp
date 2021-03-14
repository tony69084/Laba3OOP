#include <iostream>
#include <cmath>
namespace doWhileLoop {
    using namespace std;
    int findFirstElement(double eps)
    {
        double a;
        int i = 0;
        do {
            a = pow(-1, i) * ((1 + (3 * i)) / pow(3, i));
            if (abs(a) <= eps)
                break;
            else
                i++;
        } while (i <= numeric_limits<int>::max());
        return i;
    }
}