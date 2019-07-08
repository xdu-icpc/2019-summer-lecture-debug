#include <bits/stdc++.h>
using namespace std;

const int M = 1'0000'0000'9;

int pow_mod(int a, int x)
{
	if (!x)
		return 1;
	long long t = pow_mod(a, x>>1);
	t = t * t % M;
	if (x&1)
		t = t * a % M;
	return t;
}

int a[5001];
int f[5001];

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	sort(a+1, a+n+1);
	f[0] = 0;
	a[0] = -1;
	int acc = 0;
	int n_perm = 1;
	for (int k = 1; k <= n; k++) {
		// printf("k = %d:\n", k);
		if (a[k] != a[k-1])
			acc = 0;
		++acc;
		n_perm = 1ll * n_perm * k % M * pow_mod(acc, M) % M;
		int l_n_perm = 1, r_n_perm = n_perm;
		long long sum = 0;
		int acc1 = 0, acc2 = 0;
		for (int i = 1; i <= k; i++) {
			if (a[i] != a[i-1])
				acc2 = 0;
			++acc2;
			if (acc1 == 0)
				while (i + acc1 <= k && a[i + acc1] == a[i])
					++acc1;
			--acc1;
			// printf("acc1 = %d\n", acc1);
			r_n_perm = 1ll * r_n_perm * pow_mod(k-i+1, M-2) % M *
				(acc1 + 1) % M;
			// printf("(%d-%d)*%d\n", l_n_perm, f[i-1], r_n_perm);
			sum = (sum + 1ll * (l_n_perm - f[i-1]) * (r_n_perm)) % M;
			l_n_perm = 1ll * l_n_perm * i % M * pow_mod(acc2, M-2) % M;
		}
		// printf("%d\n", sum);
		f[k] = sum;
	}
	printf("%d\n", (n_perm - f[n] + M) % M);
	return 0;
}
