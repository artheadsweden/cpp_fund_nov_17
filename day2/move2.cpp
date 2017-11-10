#include <iostream>

using namespace std;

class MyClass
{
public:
	MyClass()
	{
		cout << "Default constructor" << endl;
	}

	MyClass(int i) : value(i)
	{
		cout << "Constructor taking one argument -> " << i << endl;
	}

	MyClass(const MyClass& other): value(other.value)
	{
		cout << "Copy constructor for " << other.value << endl;
	}

	MyClass(MyClass&& other) : value(other.value)
	{
		cout << "Move constructor for " << other.value << endl;
	}

	MyClass& operator=(const MyClass& other)
	{
		cout << "Copy assignment operator for " << other.value << endl;
		MyClass tmp(other);
		swap(value, tmp.value);
		return *this;
	}

	MyClass& operator=(MyClass&& other)
	{
		cout << "Move assignment operator for " << other.value << endl;
		swap(value, other.value);
		return *this;
	}
	void printit()
	{
		cout << value << endl;
	}
private:
	int value;
};

int main()
{
//	MyClass m1;
//	MyClass m2(3);
//	MyClass m3 = m2;
//	m2 = m3;

	MyClass myobject;
	myobject = MyClass(4);
	MyClass myobject2(MyClass(333));
	myobject2.printit();
	return 0;
}