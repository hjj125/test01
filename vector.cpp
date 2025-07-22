#include "vector.h"
#include <iostream>
using namespace std;

Vector::Vector(int size=0):length(size)
{
	data = new int[size];
}

Vector::Vector(const Vector& p):length(p.length)
{
	data = new int[length];
	for (int i = 0; i < length; i++)
	{
		data[i] = p.data[i];
	}
}

Vector::~Vector()
{
	delete [] data;
}

Vector& Vector::operator=(const Vector& p)
{
	if (this == &p)
	{
		return *this;
	}
	length = p.length;
	if (data != 0)
	{
		delete[] data;
	}
	data = new int[p.length];
	for (int i = 0; i < length; i++)
	{
		data[i] == p.data[i];
	}
	return *this;
}

Vector operator+(const Vector& c1, const Vector& c2)
{
	Vector temp(c1);
	for (int i = 0; i < c1.length; i++)
	{
		temp.data[i] = temp.data[i] + c2.data[i];
	}
	return temp;
}

Vector operator-(const Vector& c1, const Vector& c2)
{
	Vector temp(c1);
	for (int i = 0; i < c1.length; i++)
	{
		temp.data[i] = temp.data[i] - c2.data[i];
	}
	return temp;
}

int Vector::operator*(const Vector& p)
{
	int ans = 0;
	for (int i = 0; i < length; i++)
	{
		ans += data[i] * p.data[i];
	}
	return ans;
}

int& Vector::operator[](int size)
{
	return data[size];
}

istream& operator>>(istream& in, Vector& p)
{
	for (int i = 0; i < p.length; i++)
	{
		in >> p.data[i];
	}
	return in;
}

ostream& operator<<(ostream& out, Vector& p)
{
	for (int i = 0; i < p.length; i++)
	{
		out<< p.data[i]<<" ";
	}
	return out;
}