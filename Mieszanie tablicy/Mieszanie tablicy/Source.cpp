//https://pl.spoj.com/problems/FR_07_11/

#include<iostream>
#include <stack>
#include <queue>
using namespace std;
int main()
{
	stack < int > S;
	queue < int > K;
	priority_queue < int > KP;
	int T[2000009];
	int pom = 1;
	for (int g = 0; g < 2000008; g++)
	{
		T[g] = pom;
		pom++;
		if (pom > 3)
			pom = 1;
	}

	//cout << T[2] << " " << T[3] << endl;
	int n;
	int l;
	cin >> n;
	for (int j = 0; j < n; j++)
	{
		cin >> l;
		if (T[j] == 1)
		{
			S.push(l);
		}
		if (T[j] == 2)
		{
			K.push(l);
		}
		if (T[j] == 3)
		{
			KP.push(l);
		}
	}
	for (int j = 0; j<n; j++)
	{
		if (T[j] == 1)
		{
			cout << S.top() << " ";
			S.pop();
		}
		if (T[j] == 2)
		{
			cout << K.front() << " ";
			K.pop();
		}
		if (T[j] == 3)
		{
			cout << KP.top() << " ";
			KP.pop();
		}

	}
	return 0;
}