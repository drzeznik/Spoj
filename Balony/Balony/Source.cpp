//https://pl.spoj.com/problems/AL_07_10/

#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
int n, m;
long long tmp;
int N[500000];
int porow(int x)
{
	tmp = 0;
	for (int i = 0;i<n;++i)
	{
		tmp = tmp + N[i] / x;
		if (N[i] % x != 0)	tmp++;
	}
	if (tmp <= m)
		return 1;
	else
		return 0;
}
long long bin(long long p, long long k)
{
	while (p<k)
	{
		long long s = (p + k) / 2;
		if (porow(s))
			k = s;
		else
			p = s + 1;
	}
	return k;
}
int main()
{
	while (scanf("%d%d", &n, &m) == 2)
	{
		long long sum = 0;
		for (int i = 0;i<n;++i)
		{
			scanf("%d", &N[i]);
			sum += N[i];
		}
		printf("%lld\n", bin(1, sum));
	}
	return 0;
}
