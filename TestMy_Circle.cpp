#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include "My_Circle.h"

using namespace std;

int main() {
	My_Circle C;
	C.SetR(10);
	cout << "Բ�İ뾶:" << C.GetR() << endl;
	cout << "Բ�����:" << C.GetCircleArea() << endl;
	cout << "Բ���ܳ�:" << C.GetCircleLength() << endl;

	return 0;
}