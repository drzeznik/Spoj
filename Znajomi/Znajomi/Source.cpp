//https://pl.spoj.com/problems/AL_08_08/


#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
vector<vector<int> > V;
queue<int> Q;
vector<int> O;
int main() {
	int d, n, m, mg, g, a, b;
	scanf("%d", &d);
	while (d--) {
		mg = 0;
		scanf("%d %d", &n, &m);
		V.assign(n, vector<int>());
		O.assign(n, 0);
		while (m--) {
			scanf("%d %d", &a, &b);
			a--;
			b--;
			V[a].push_back(b);
			V[b].push_back(a);
		}
		for (int i = 0;i<n;++i)
		{
			g = 0;
			if (O[i] == 0)
			{
				O[i] = 1;
				Q.push(i);
				while (Q.size() != 0)
				{
					a = Q.front();
					Q.pop();
					g++;
					for (int j = 0;j<(int)V[a].size();++j)
					{
						if (O[V[a][j]] == 0)
						{
							O[V[a][j]] = 1;
							Q.push(V[a][j]);
						}
					}
				}
			}
			if (g>mg) mg = g;
		}
		printf("%d\n", mg);
	}
	return 0;
}
