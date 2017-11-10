#include <iostream>
#include <memory>

using namespace std;

class MyClass
{
public:
	MyClass() { cout << "Constructor" << endl; }
	~MyClass() { cout << "Destructór" << endl; }
	void hi() { cout << "hi" << endl; }
};

void myfunc(shared_ptr<MyClass> ptr)
{
	ptr->hi();
}

int main()
{
	// Raw pointer
	MyClass* ptr = new MyClass();
	ptr->hi();
	delete ptr;

	{
		unique_ptr<MyClass> uptr(new MyClass());
		//unique_ptr<MyClass> uptr2 = uptr;
	}
	shared_ptr<MyClass> shrdptr1(new MyClass());
	shared_ptr<MyClass> shrdptr2 = shrdptr1;
	myfunc(shrdptr1);
	shrdptr2->hi();
	return 0;
}