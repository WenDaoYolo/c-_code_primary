#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



enum season {
	SPR,
	SUM,
	AUT,
	WIN
};

int main() {
	enum season b1 = 0;
	enum season b2 = SUM;
	return 0;
}

#if 0
int main() {
	const int a = 5;
	int* pa = &a;
	printf("before:%d\n", a);
	*pa = 50;
	printf("after:%d", a);

	return 0;
}

#endif


#if 0
int main() {
	int a = 30;
	int b = 20;
	*(a > b ? &a : &b) = 30;



	const int test1 = 30;
	int c = 100;
	int d = 200;
	int e = 300;

	const int* test2=&c;
	test2 = &d;

	 int* const test3=&c;
	 *test3 = 200;

	 const int* const test4 = &e;

	 int arr[test1];


	return 0;
}
#endif


#if 0
bool a;
a = true;              //ȡֵ��trueΪ��(1)��falseΪ��(0)���䱾�ʾ��Ƿ�0��0
bool b = false;

int main() {
	a = 30;
	cout << a << sizeof(a) << endl;   //bool����ռ��1���ֽڣ�ȡֵֻ��false(0)��true(1)
	return 0;
}
#endif


#if 0
#include<iostream>
using namespace std;

struct student {
	char name[20];
	int id;
};

int main() {
	student b;
	return 0;
}
#endif

#if 0
int main() {
	const int a = 20;
	int* pa = (int*)&a;
	*pa = 666;

	cout << "a:" << a << endl;
	cout << "*pa:" << *pa << endl;

	return 0;
}
#endif
