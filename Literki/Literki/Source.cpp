//https://pl.spoj.com/problems/AL_14_01/

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
double tab[150];
using namespace std;
int main()
{
	std::ios_base::sync_with_stdio(0);
	char t;
	while ((t = getchar()) != EOF)
	{
		tab[t]++;
	}
	long long da = 0;
	for (int i = 65;i<91;i++)
	{
		da = da + tab[i];
	}

	for (int i = 65;i<91;i++)
	{
		if (tab[i] != 0)
			tab[i] = (tab[i] / da) * 100;
	}

	for (int i = 65;i<91;i++)
	{
		if (tab[i] != 0)
			tab[i] = int(tab[i] + 0.5);
	}

	for (int i = 65;i<91;i++)
	{
		cout << char(i);
		for (int y = 0;y<tab[i];y++)
		{
			cout << "*";
		}
		cout << endl;
	}


	return 0;
}