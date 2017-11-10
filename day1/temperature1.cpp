#include <iostream>

using namespace std;

class Temperature
{
public:
	Temperature();
	Temperature(float t);
	float getFarenheit();
	float getCelsius();
	void setTemp(float f);
private:
	float temp;
};

Temperature::Temperature() : temp(0.0) {}

Temperature::Temperature(float t) : temp(t) {}

float Temperature::getFarenheit()
{
	return temp * 9 / 5 + 32;
}

float Temperature::getCelsius()
{
	return temp;
}

void Temperature::setTemp(float t)
{
	temp = t;
}

int main()
{
	Temperature t1(12.1f);
	Temperature t2{ 13.2f };
	Temperature t3 = 14.3f;
	cout << t1.getCelsius() << endl;
	cout << t1.getFarenheit() << endl;
	cout << t2.getCelsius() << endl;
	cout << t2.getFarenheit() << endl;
	cout << t3.getCelsius() << endl;
	cout << t3.getFarenheit() << endl;
	
	return 0;
}