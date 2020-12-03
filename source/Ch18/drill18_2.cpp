#include "../std_lib_facilities.h"

vector<int> gv = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

void f(vector<int> v)
{
	vector<int> lv(10);

	lv = v;

	for (int i = 0; i < lv.size(); ++i)
	{
		cout << lv[i] << ' ';
	}
	cout << endl;

	vector<int> lv2 = v;

	for (int i = 0; i < 10; ++i)
	{
		cout << lv2[i] << ' ';
	}
	cout << endl;
}

int fac(int n)
{
	int x = 1;
	while(n > 1)
	{
		x = x * n;
		--n;
	}

	return x;
}

int main()
{
	f(gv);

	vector<int> vv(10);
	for (int i = 0; i < 10; ++i)
	{
		vv[i] = fac(i + 1);
	}

	f(vv);
	
	return 0;
}