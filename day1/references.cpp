#include <iostream>

using namespace std;

void func(int& x)
{
	x++;
}

int main()
{
	int i = 10;
	func(i);
	cout << i << endl;
	return 0;
}