//https://pl.spoj.com/problems/FR_01_02/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;
typedef unsigned long long ll;
ll nwd(ll a, ll b)
{
	ll c;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}


int main()
{
	std::ios_base::sync_with_stdio(0);
	unsigned long long a, b, t, ab, l1, l2, a1, b1, sum;
	char pom;
	cin >> l1 >> pom >> a >> l2 >> pom >> b;
	a1 = a;
	b1 = b;
	ab = a * b;
	while (b)
	{
		t = b;
		b = a % b;
		a = t;
	}
	ab /= a;
	//cout << ab << endl << endl;
	a = ab / a1;
	b = ab / b1;
	sum = l1*a + l2*b;
	ll skr = nwd(sum, ab);
	sum = sum / skr;
	ab = ab / skr;
	cout << l1 << "/" << a1 << " + " << l2 << "/" << b1 << " = " << sum << "/" << ab << endl;
	return 0;
}