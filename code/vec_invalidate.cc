#include <vector>
#include <cstdio>
using namespace std;

int main()
{
	vector<int> v = {1,2,3};
	for (int i: v)
		if (i > 0)
			v.push_back(-i);
	for (int i: v)
		printf("%d\n", i);
}
