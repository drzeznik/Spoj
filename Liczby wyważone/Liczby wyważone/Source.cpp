//https://pl.spoj.com/problems/LICZBYW/

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
string dodaj(string a, string b)
{
	string z = "";
	int i = a.length() - 1;
	int j = b.length() - 1;
	int w = 0;
	while (i >= 0 && j >= 0)
	{
		w = a[i] - '0' + b[j] - '0' + w;
		z = (char)(w % 10 + '0') + z;
		w = w / 10;
		--i;
		--j;
	}
	while (i >= 0)
	{
		w = a[i] - '0' + w;
		z = (char)(w % 10 + '0') + z;
		w = w / 10;
		--i;
	}
	while (j >= 0)
	{
		w = b[j] - '0' + w;
		z = (char)(w % 10 + '0') + z;
		w = w / 10;
		--j;
	}
	if (w>0)
		z = (char)(w + '0') + z;
	return z;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string a, b = "1";
		cin >> a;
		a = dodaj(a, b);
		if (a.size()<2)
		{
			int l = (int)(a[0]) - '0';
			if (l <= 2)
			{
				cout << "2" << endl;
				continue;
			}
			if (l <= 6)
			{
				cout << "6" << endl;
				continue;
			}
			if (l>6)
			{
				cout << "10" << endl;
				continue;
			}
			cout << l << endl;
		}
		int l2 = a[a.size() - 1] - '0' + (a[a.size() - 2] - '0') * 10;
		while ((l2 - 2) % 4 != 0)
		{
			a = dodaj(a, b);
			l2 = a[a.size() - 1] - '0' + (a[a.size() - 2] - '0') * 10;
		}
		//cout<<l2<<endl;
		a[a.size() - 1] = (char)l2 % 10 + '0';
		l2 = (l2) / 10;
		a[a.size() - 2] = (char)l2 % 10 + '0';
		cout << a << endl;
	}
	return 0;
}