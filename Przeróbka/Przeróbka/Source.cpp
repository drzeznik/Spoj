//https://pl.spoj.com/problems/PRZEROBK/

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int T[1001][1001];
string aw, bw;
int f(int a, int b)
{
	if (a <= 0 || b <= 0) return max(a, b);
	if (T[a][b] != -1) return T[a][b];
	if (aw[a - 1] == bw[b - 1]) return f(a - 1, b - 1);
	return T[a][b] = min(min(f(a - 1, b), f(a, b - 1)), f(a - 1, b - 1)) + 1;
}
int main()
{
	int l, mi;
	while (cin >> aw >> bw >> l)
	{
		for (int i = 0; i < 1001; i++)
			for (int j = 0; j < 1001; j++)
				T[i][j] = -1;
		//cin >> aw >> bw;
		mi = f(aw.size(), bw.size());
		if (mi < l || l<mi)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
