#include <iostream>
#include <cmath>
#include "../func.h"
using namespace std;
namespace whileLoop {
	void print(int n, int k)
	{
		double a;
		int i = 0;
		while (i <= (n - 1))
		{
			if (i % k == k - 1) {
				++i;
				continue;
			}
			else
				a = pow(-1, i) * ((1 + (3 * i)) / pow(3, i));
			cout << a << " ";
			++i;
		}
	}
}