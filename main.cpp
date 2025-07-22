#include <iostream>
#include "vector.h"
using namespace std;

int main()
{
	
	Vector a(3);
	Vector b(3);

	cout << "输入3个元素的向量: ";
	cin >> a ;
	cout << "输入3个元素的向量: ";
	cin >> b;

	cout << "向量a：" << a<<endl;
	cout << "向量b：" << b<<endl;

	Vector c = a + b;
	Vector d = a - b;
	int multiply = a * b;

	cout << "a+b:" << c << endl;
	cout << "a-b:" << d << endl;
	cout << "a*b:" << multiply << endl;

	cout << "a[1]:" << a[1] << endl;

	return 0;
}