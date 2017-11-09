#include <iostream>

using namespace std;

int func(int x)
{
	return x + 2;
}

int main()
{
	int y = 8;

	int i = func(15);

	int* iPtr = new int(10);
	delete iPtr;
	iPtr = nullptr;
	cout << *iPtr << endl;

	return 0;
}