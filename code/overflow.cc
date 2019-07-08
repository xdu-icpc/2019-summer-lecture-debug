#include <iostream>
using namespace std;

const int M = 998244353;

int main()
{
	int a, b;
	cin >> a >> b;
	long long c = a * b % M;
	cout << c << '\n';
	return 0;
}
