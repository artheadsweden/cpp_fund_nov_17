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
	Temperature add(const Temperature& other);
	Temperature operator +(const Temperature& other);
	Temperature operator -(const Temperature& other);
	Temperature operator *(const Temperature& other);
	Temperature operator /(const Temperature& other);
	friend Temperature operator +(const float& t, const Temperature& other);
	friend istream& operator >>(istream& is, Temperature& other);
	friend ostream& operator <<(ostream& os, const Temperature& other);
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

Temperature Temperature::add(const Temperature& other)
{
	return Temperature(temp + other.temp);
}

Temperature Temperature::operator +(const Temperature& other)
{
	return Temperature(temp + other.temp);
}

Temperature Temperature::operator -(const Temperature& other)
{
	return Temperature(temp - other.temp);
}

Temperature Temperature::operator *(const Temperature& other)
{
	return Temperature(temp * other.temp);
}

Temperature Temperature::operator /(const Temperature& other)
{
	return Temperature(temp / other.temp);
}

Temperature operator +(const float& t, const Temperature& other)
{
	return Temperature(t + other.temp);
}

istream& operator >> (istream& is, Temperature& other)
{
	is >> other.temp;
	return is;
}

ostream& operator << (ostream& os, const Temperature& other)
{
	os << other.temp;
	return os;
}

Temperature add(Temperature t1, Temperature t2)
{
	return Temperature(t1.getCelsius() + t2.getCelsius());
}

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

	Temperature t4 = add(t1, t2);
	cout << t4.getCelsius() << endl;

	Temperature t5 = t1.add(t2);
	cout << t5.getCelsius() << endl;

	Temperature t6 = t1 / t2;
	cout << t6.getCelsius() << endl;

	Temperature t7 = t1 + 6.78f;
	cout << t7.getCelsius() << endl;
	Temperature t8 = 6.78f + t1 + t2;
	cout << t8.getCelsius() << endl;

	cout << "Enter a temp: ";
	cin >> t8 >> t7;
	cout << t8 << t7 << endl;

	return 0;
}