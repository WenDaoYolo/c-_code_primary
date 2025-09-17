#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

#if 0
using namespace std;

void test(int a) {
	cout << "func1" << endl;
}

void test(int a, char b) {
	cout << "func2" << endl;
}

void test(char a, int b) {
	cout << "func3" << endl;
}

int main() {
	int a = 5, b = 6;
	char c = 'w';

	test(a);              //������Ӧ��ʵ�ε�����ƥ������غ���
	test(a, c);
	test(c, b);

	return 0;
}
#endif

#if 0
using namespace std;


void test(int a, int b, int c = 20) {
	cout << "func1" << endl;
}

void test(int a, int b) {
	cout << "func2" << endl;
}

main() {
	test(1, 2);        //��ʱ�ͻ�������壬�������غ���������ʵ�εĴ���

	return 0;
}

#endif

#if 0
using namespace std;

void test(double b) {
	cout << "func1" << endl;
}

void test(int c) {
	cout << "func2" << endl;
}

int main() {
	test(4);            //�ϸ�ƥ��
	test(3.5f);         //��ʽת�������ƥ��,float -> double
	test('A');          //��ʽת�������ƥ��,char -> int(�ַ���ASCLL��)
	//test("hello");      �޷�ƥ�䣬���б�����

	return 0;
}

#endif


#if 0
using namespace std;

int fun1(int a, int b) {
	cout << "fun1 " << a << " " << b << endl;
	return 0;
}

// ���䷽ʽ2��ͨ��typedef����
typedef int MY_FUN(int, int);        //����һ��MY_FUN�����ͣ�����һ���������ͣ������ķ���ֵΪint�������Ĳ���Ϊint��int


int main() {

	//��ʽ1��ֱ�Ӷ��庯��ָ������
	int(*p)(int, int) = fun1;

	//ͨ������ָ����ú��� -> �عˣ����������Ǻ����ĵ�ַ����ַ���Ǻ����������Կ��Խ����õ��ã�Ҳ����ֱ�ӵ�����������
	p(10, 20);
	(*p)(666, 999);

	MY_FUN* pp = fun1;                   //����ú������͵�ָ�룬��ָ��һ������
	pp(111, 1111);
	(*pp)(222, 2222);

	return 0;
}

#endif


#if 0
using namespace std;

int test(int a) {
	cout << "func1" << endl;
	return 0;
}

int test(int a, char b) {
	cout << "func2" << endl;
	return 0;
}

int main() {
	int(*p1)(int) = test;             //p1��test(int)ƥ��
	int(*p2)(int,char) = test;        //p2��test(int,char)ƥ��

	(*p1)(10);
	p2(10, 'A');

	return 0;
}

#endif