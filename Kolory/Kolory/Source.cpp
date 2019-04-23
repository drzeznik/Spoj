//https://pl.spoj.com/files/src/13719064/

#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<vector>
#include<deque>
using namespace std;

vector< vector<int> > V;
vector<int> O;
deque<int> K;

int main()
{
	int z, n, m, a, b, maxa, max = 0;
	scanf("%d", &z);
	while (z--)
	{
		scanf("%d %d", &n, &m);

		max = 0;
		V.clear();
		V.resize(n);
		O.resize(n);
		for (int i = 0; i < n; i++) O[i] = 0;
		K.clear();


		while (m--)
		{
			scanf("%d %d", &a, &b);
			V[a].push_back(b);
			V[b].push_back(a);
		}

		for (int i = 0;i<n;i++)
		{
			maxa = 0;
			if (O[i] == 0)
			{
				O[i] = 1;

				K.push_back(i);
				while (K.size() != 0)
				{
					int tmp = K.front();
					K.pop_front();
					maxa++;
					for (int j = 0;j<(int)V[tmp].size();j++)
					{
						if (O[V[tmp][j]] == 0)
						{
							O[V[tmp][j]] = 1;
							K.push_back(V[tmp][j]);
						}
					}
				}
			}
			if (maxa>max) max = maxa;
		}
		printf("%d\n", max);
	}

	return 0;
}