#include "std_lib_facilities.h"


int main()
try{
	//cout << "Success!\n"; //Cout << "Success!\n";
	//cout << "Success!\n"; //cout << "Success!\n; 
	//cout << "Success" << "!\n"; //cout << "Success" << !\n"
	//cout << "success" << endl; //cout << success << endl; 
	//int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n"; //string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
	//vector<int> v(10); v[5] = 7;  if (v[5]=7) cout << "Success!\n"; //vector<int> v(10); v(5) = 7;  if (v(5)!=7) cout << "Success!\n"; 
	//bool cond = true; if (cond) cout << "Success!\n"; else cout << "Fail!\n"; //if (cond) cout << "Success!\n"; else cout << "Fail!\n"; 
	//bool c = true; if (c)  cout << "Success!\n"; else cout << "Fail!\n"; //bool c = false; if (c)  cout << "Success!\n"; else cout << "Fail!\n";
	//string s = "ape"; bool c = "fool">s; if (c) cout << "Success!\n"; //strings = "ape"; bool c = "fool"<s; if (c) cout << "Success!\n"; 
	//string s = "ape"; if (s!="fool") cout << "Success!\n"; //string s = "ape"; if (s=="fool") cout << "Success!\n"; 
	//string s = "ape";  if (s!="fool") cout << "Success!\n"; //string s = "ape";  if (s=="fool") cout < "Success!\n"; 
	//string s = "ape"; if (s!="fool") cout << "Success!\n"; //string s = "ape"; if (s+"fool") cout < "Success!\n"; 
	//vector<char> v(5); for (double i=0; i<v.size(); ++i) ;  cout << "Success!\n"; //vector<char> v(5); for (int i=O; O<v.size(); ++i) ;  cout << "Success!\n"; 
	//vector<char> v(5); for (int i=0; i<=v.size(); ++i) ;  cout << "Success!\n"; //vector<char> v(5); for (int i=O; i<=v.size(); ++i) ;  cout << "Success!\n";
	//string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i]; //string s= "Success!\n"; for (int  i=O; i<6; ++i) cout << s[i]; 
	//if (true) cout << "Success!\n"; else cout << "Fail!\n"; //if (true) then cout << "Success!\n"; else cout << "Fail!\n "; 
	//int x = 2000; int c = x; if (c==2000) cout << "Success!\n"; //int x = 2000; char c = x; if (c==2000) cout << "Success!\n"; 
	//string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i]; //string s = "Success!\n"; for (int i=O; i<10; ++i) cout << s[i]; 
	//vector<char> v(5);  for (int i=0; i<=v.size(); ++i)  ;  cout << "Success!\n"; //vector v(5);  for (int i=O; i<=v.size(); ++i)  ;  cout << "Success !\n"; 
	//int i=10; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n"; //int i=O; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n"; 
	//double x = 4; double d = 17/(x-2);  if (d==2*x+0.5) cout << "Success!\n"; //int x = 2; double d= 5/(x-2);  if (d==2*x+0.5) cout << "Success!\n"; 
	//string s = "Success!\n"; for (int  i=0;  i<=10; ++i) cout << s[i]; //string<char> s = "Success!\n"; for (int  i=O;  i<=10; ++i) cout << s[i];
	//int i=10; int j = 0; while (i<10) ++j; if (j<i) cout << "Success!\n"; // int i=O; while (i<10) ++j; if (j<i) cout << "Success!\n"; 
	//double x  = 4; double d = 17/(x-2); if (d==2*x+0.5)  cout << "Success!\n"; // int x = 4; double d = 5/(x-2); if (d=2*x+0.5)  cout << "Success!\n"; 
	//cout << "Success!\n";  //cin << "Success!\n";

	return 0;
}
catch (exception& e)
{
	cerr << "error: " << e.what() << '\n';
	return 1;
}
catch (...)
{
	cerr << "Oops: unknown exception!\n";
	return 2;
}