//https://pl.spoj.com/problems/JSUMDUZE/

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
	string s1, s2;
	while (t--)
	{
		cin >> s1 >> s2;
		cout << dodaj(s1, s2) << endl;
	}
	return 0;
}