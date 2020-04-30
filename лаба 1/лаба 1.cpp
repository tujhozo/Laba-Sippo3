#include <iostream>
#include <math.h>
using namespace std;
int f1(int x)
{
	int q = 0;
	if (x >= 0)
	{
		q = x*x+7*x ;
	}
	else
	{
		q = x / 2 + 9;
	}
	return q;
}
int f2(int &x)
{
	int c = f1(x);
	return c;

}

int main()
{
	int a;
	int b;
	cout << " diapazon " << endl;
	cin >> a >> b;
	for (int i = a; i < b; i++)
	{
		int sum = f2(i);
		cout << "peredanny parametr " << i << endl;
		cout << "rezultat " << sum << endl;

	}

}