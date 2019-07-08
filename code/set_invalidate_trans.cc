#include <set>
#include <cstdio>
using namespace std;

int main()
{
	set<int> S = {4,-1,5,8,-2,-5};
	for (auto __begin = S.begin(),
		      __end = S.end();
		      __begin != __end;
		      ++__begin) {
		int x = *__begin;
		if (x % 2 == 0)
			S.erase(x);
	}
	for (int x: S)
		printf("%d\n", x);
}
