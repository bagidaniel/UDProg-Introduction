#include "../std_lib_facilities.h"

void print_array10(ostream& os, int* a)
{
	for (int i = 0; i < 10; ++i)
	{
		os << a[i] << ' ';
	}
}

void print_array10(ostream& os, int* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		os << a[i] << ' ';
	}
}

void print_vector(ostream& os, vector<int> a)
{
	for (int i = 0; i < a.size(); ++i)
	{
		cout << a[i] << ' ';
	}
}

int main()
{
	cout << "-1.-2. feladat: " << endl;
	int* a = new int[10];

	for (int i = 0; i < 10; ++i)
	{
		cout << a[i] << ' ';
	}
	cout << endl;

	delete[] a;

	cout << "-5. feladat " << endl;
	int* b = new int[10];

	for (int i = 0; i < 10; ++i)
	{
		b[i] = 100 + i;
	}

	print_array10(cout, b);
	cout << endl;

	delete[] b;

	cout << "-6. feladat: " << endl;
	int* c = new int[11];

	for (int i = 0; i < 11; ++i)
	{
		c[i] = 100 + i;
		cout << c[i] << ' ';
	}
	cout << endl;
	
	delete[] c;

	cout << "-8. feladat: " << endl;
	int* d = new int[20];

	for (int i = 0; i < 20; ++i)
	{
		d[i] = 100 + i;
	}

	print_array10(cout, d, 20);
	cout << endl;

	delete[] d;

	cout << "-10. feladat:" << endl;
	vector<int> x;

	for (int i = 0; i < 10; ++i)
	{
		x.push_back(100 + i);
	}

	print_vector(cout, x);
	cout << endl;

	vector<int> y;

	for (int i = 0; i < 11; ++i)
	{
		y.push_back(100 + i);
	}

	print_vector(cout, y);
	cout << endl;

	vector<int> z;

	for (int i = 0; i < 20; ++i)
	{
		z.push_back(100 + i);
	}

	print_vector(cout, z);
	cout << endl;

	return 0;
}