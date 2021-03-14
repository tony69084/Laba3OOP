#include <iostream>
#include <cmath>
using namespace std;
namespace forLoop {
	void print(int n, int k)
	{
		double a;
		for (int i = 0; i <= (n - 1); ++i)
		{
			if (i % k == k - 1)
				continue;
			a = pow(-1, i) * ((1 + (3 * i)) / pow(3, i));
			cout << a << " ";
		}
	}
}