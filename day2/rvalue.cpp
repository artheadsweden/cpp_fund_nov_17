#include <iostream>

using namespace std;

class MyClass
{};

void f(int i )
{}

//void f(int& i)
//{}

int main()
{
	int x = 5; // x is a lvalue, 5 is a rvalue
	//(x + 1) = 3;

	MyClass mc1();
	MyClass* mc2 = new MyClass();	
	delete mc2;

	f(x);
	f(5);

	return 0;
}