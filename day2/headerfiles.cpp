#include <iostream>
#include "Temperature.h"
using namespace std;

int main()
{
	Temperature t1(12.1f);
	Temperature t2{ 13.2f };
	Temperature t3 = 14.3f;
	Temperature td;
	cout << td.getCelsius() << endl;
	Temperature* pT1 = new Temperature(3.45f);
	cout << pT1->getCelsius() << endl;
	delete pT1;

	cout << t1.getCelsius() << endl;
	cout << t1.getFarenheit() << endl;
	cout << t2.getCelsius() << endl;
	cout << t2.getFarenheit() << endl;
	cout << t3.getCelsius() << endl;
	cout << t3.getFarenheit() << endl;

	Temperature t5 = t1.add(t2);
	cout << t5.getCelsius() << endl;

	Temperature t6 = t1 / t2;
	cout << t6.getCelsius() << endl;

	Temperature t7 = t1 + 6.78f;
	cout << t7.getCelsius() << endl;
//	Temperature t8 = 6.78f + t1 + t2;
//	cout << t8.getCelsius() << endl;




	return 0;
}