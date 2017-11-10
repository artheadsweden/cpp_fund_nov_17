#pragma once
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
