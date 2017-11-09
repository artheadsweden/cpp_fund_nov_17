#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1 = "Hi there everyone";
	cout << s1.substr(3, 9) << endl;

	string* s2 = new string("Hi there everyone");
	cout << (*s2).substr(3, 9) << endl;
	cout << s2->substr(3, 9) << endl;
	delete s2;

	int x = 1;
	int* xPtr = &x;
	return 0;
}