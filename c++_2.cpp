#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>

using namespace std;

#if 0
void test(int& a) {
	a = 666;
	cout << &a << endl;   //ͬһ���ڴ浥Ԫ
}

int main() {
	int w = 50;
	test(w);
	cout << &w << endl;   //ͬһ���ڴ浥Ԫ 
	return 0;
}

#endif

#if 0
void my_swap1(int* a,int*b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void my_swap2(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int a = 999;
	int b = 666;
	my_swap1(&a, &b);
	cout << a << " " << b << endl;
	my_swap2(a, b);
	cout << a << " " << b << endl;

	return 0;
}
#endif

struct test1 {
	int* a;
};

struct test2 {
	int& a;
};

int main() {
	cout << sizeof(test1) << endl;
	cout << sizeof(test2) << endl;
	return 0;
}