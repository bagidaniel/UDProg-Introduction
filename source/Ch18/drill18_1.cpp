#include "../std_lib_facilities.h"

int ga[10] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

void f(int arr[], int n)
{
	int la[10] = {};

	for (int i = 0; i < n; ++i)
	{
		la[i] = arr[i];
	}

	for (int i = 0; i < n; ++i)
	{
		cout << la[i] << ' ';
	}
	cout << endl;

	int* p = new int[n];

	for (int i = 0; i < n; ++i)
	{
		p[i] = arr[i];
	}

	for (int i = 0; i < n; ++i)
	{
		cout << p[i] << ' ';
	}
	cout << endl;

	delete[] p;
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
	f(ga, 10);

	int aa[10] = {};
	for (int i = 0; i < 10; ++i)
	{
		aa[i] = fac(i + 1);
	}

	f(aa, 10);
	
	return 0;
}