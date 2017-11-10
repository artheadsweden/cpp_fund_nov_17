#include <iostream>

using namespace std;

void f(int& i)
{
	cout << "f with int&" << endl;
}

void f(int&& i)
{
	cout << "f with int&&" << endl;
}


int main()
{
	int x = 2;
	f(move(x)); // Move is a cast to rvalue
	f(5);

	const int& y = x;

	auto r = y;
	decltype(2 + 4.5) p;
	decltype(auto) q = y;

	int a = 1;
	int b = 2;
	// + operator only works with rvalues so a and b is cast into rvalues
	int c = a + b;

	return 0;
}