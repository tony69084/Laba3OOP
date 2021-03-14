#include <iostream>
#include <cmath>
namespace doWhileLoop {
	using namespace std;
	void print(int n, int k)
	{
		double a;
		int i = 0;
		do
		{
			if (i % k == k - 1) {
				++i;
				continue;
			}
			else
				a = pow(-1, i) * ((1 + (3 * i)) / pow(3, i));
			cout << a << " ";
			++i;
		} while (i <= (n - 1));
	}
}