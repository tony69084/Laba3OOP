#include <iostream>
#include <cmath>
using namespace std;
namespace doWhileLoop {
    int findFirstNegativeElement(double eps)
    {
        double a;
        int i = 0;
        do {
            a = pow(-1, i) * ((1 + (3 * i)) / pow(3, i));
            if (a < 0 && abs(a) <= eps)
                return i;
            else 
                i++;
        } while (i <= numeric_limits<int>::max());
    }
}