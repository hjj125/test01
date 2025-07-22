#pragma once
#ifndef vector
#define vector

#include <iostream>
using namespace std;

class Vector
{
private:
	int* data;
	int length;

public:
	Vector(int size);
	Vector(const Vector& p);
	~Vector();

	Vector& operator =(const Vector& p);
	friend Vector operator+(const Vector&, const Vector&);
	friend Vector operator-(const Vector&, const Vector&);
	int operator*(const Vector&);
	int& operator[](int);

	friend istream& operator>>(istream&, Vector&);
	friend ostream& operator<<(ostream&, Vector&);

};


#endif