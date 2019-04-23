//https://pl.spoj.com/problems/KC015/

#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include<iostream>
using namespace std;
int main()
{
	std::ios_base::sync_with_stdio(0);
	string a, b, z;
	while (true)
	{
		cin >> a;
		if (cin.eof())break;
		cin >> z >> b;
		int t = 0, w = 0;
		if (z == "==")
			t = 1;
		if (z == "<=")
			t = 2;
		if (z == ">=")
			t = 3;
		if (z == "!=")
			t = 4;
		switch (t)
		{
		case 1:
			if (a.size() == b.size())
				w = 1;
			else
				w = 0;
			if (w == 1)
			{
				for (int i = 0;i < a.size();i++)
					if (a[i] != b[i])
					{
						w = 0;
						break;
					}
			}
			if (w == 0)
				cout << 0 << endl;
			else
				cout << 1 << endl;

			break;
		case 2:			//<
			if (a.size() < b.size())
				w = 1;
			if (a.size() > b.size())
				w = -1;
			if (a.size() == b.size())
				w = 0;
			if (w == 0)
			{
				int g = a.size();
				for (int i = g;i >= 0;i--)
				{
					if (a[i] > b[i])
					{
						w = 0;
						break;
					}
					w = 1;
				}


			}
			if (w <= 0)
				cout << 0 << endl;
			else
				cout << 1 << endl;
			break;

		case 3:  //>

			if (a.size() > b.size())
				w = 1;
			if (a.size() < b.size())
				w = -1;
			if (a.size() == b.size())
				w = 0;
			if (w == 0)
			{
				int g = a.size();
				for (int i = g;i >= 0;i--)
				{
					if (a[i] < b[i])
					{
						w = 0;
						break;
					}
					w = 1;
				}
			}
			if (w <= 0)
				cout << 0 << endl;
			else
				cout << 1 << endl;
			break;
		case 4:
			if (a.size() == b.size())
				w = 0;
			else
				w = 1;
			if (w == 0)
			{
				for (int i = 0;i < a.size();i++)
					if (a[i] != b[i])
					{
						w = 1;
						break;
					}
			}
			if (w == 0)
				cout << 0 << endl;
			else
				cout << 1 << endl;
		}
	}
	return 0;
}