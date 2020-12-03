#include "../std_lib_facilities.h"

int main()
{
	int a = 7;
	int* p1 = &a;

	cout << "p1 cím: " << p1 << "  | " << " p1 érték: " << *p1 << endl;

	int* p2 = new int[7];
	int seged = 1;
	for (int i = 0; i < 7; ++i)
	{
		p2[i] = seged;
		cout << p2[i] << endl;
		seged = seged * 2;
	}

	int* p3 = p2;

	p2 = p1;

	p2 = p3;

	cout << "p1 cím: " << p1 << "  | " << " p1 érték: " << *p1 << endl;
	cout << "p2 cím: " << p2 << "  | " << " p2 érték: " << *p2 << endl;

	delete[] p2;

	cout << "Array: " << endl;

	p1 = new int[10];
	seged = 1;
	for (int i = 0; i < 10; ++i)
	{
		p1[i] = seged;
		cout << p1[i] << ' ';
		seged = seged * 2;
	}
	cout << endl;

	p2 = new int[10];

	for (int i = 0; i < 10; ++i)
	{
		p2[i] = p1[i];
	}
	for (int i = 0; i < 10; ++i)
	{
		cout << p2[i] << ' ';
	}
	cout << endl;

	cout << "Vector: " << endl;

	vector<int> x;
	seged = 1;
	for (int i = 0; i < 10; ++i)
	{
		x.push_back(seged);
		cout << x[i] << ' ';
		seged = seged * 2;
	}
	cout << endl;

	vector<int> y;

	y = x;

	for (int i = 0; i < 10; ++i)
	{
		cout << y[i] << ' ';
	}
	cout << endl;

	return 0;
}