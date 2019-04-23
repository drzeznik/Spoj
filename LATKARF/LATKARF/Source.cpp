//https://pl.spoj.com/problems/FR_07_01/


#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
int main()
{
	long long l2, l1, t;
	cin >> t;
	while (t--)
	{
		l1 = 0;
		l2 = 0;
		string a, b;
		cin >> a >> b;
		long long mn = 1;
		for (int i = 0; i < a.size(); i++)
		{
			long long pom = a[i] - '0';
			l1 = l1 + (pom*mn);
			mn = mn * 10;
		}
		mn = 1;
		for (int i = 0; i < b.size(); i++)
		{
			long long pom2 = b[i] - '0';
			l2 = l2 + (pom2*mn);
			mn = mn * 10;
		}

		if (l1>l2)
			cout << l1 << endl;
		else if (l1<l2)
			cout << l2 << endl;
		else if (l1 = l2)
			cout << l2 << endl;
		//	cout << l1 << " " << l2 << endl;

	}

	return 0;
}