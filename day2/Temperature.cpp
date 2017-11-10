#include "Temperature.h"

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
