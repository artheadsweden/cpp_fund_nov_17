#include <iostream>
#include <vector>

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

	MyClass(const MyClass& other) : value(other.value)
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


	~MyClass()
	{
		cout << "Destructor for " << value << endl;
	}
private:
	int value;
};



int main()
{
	MyClass m1(1);
	MyClass m2(2);
	MyClass m3(3);
	MyClass m4(4);

	vector<MyClass> v;
	v.push_back(m1);
	v.push_back(m2);
	v.push_back(m3);
	v.push_back(m4);
}