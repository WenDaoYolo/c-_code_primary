#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>

#if 0
#define MAX(a,b)  \
((a) > (b) ? (a) : (b))        //���贫��a++,b++,�޷��Բ������м�⣬�Ӷ����½������
//���з�
using namespace std;

int main() {
	int a = 50;
	int b = 40;
	int c = MAX(a, b);
	cout << "c:" << c << endl;
}
#endif

#if 0
void PrintAB(int a, int b) {
	cout << "a:" << a << " " << "b:" << b << endl;
}

int main() {
	int a = 10;
	int b = 20;
	for (int i = 0; i < 100; i++) {
		a++;
		b++;
		PrintAB(a, b);                //�����100����ջ�ͳ�ջ
	}
	return 0;
}
#endif

#if 0
using namespace std;

inline void PrintAB(int a, int b) {
	cout << "a:" << a << " " << "b:" << b << endl;
}

int main() {
	int a = 5;
	int b = 6;
	for (int i = 0; i < 100; i++) {
		a++;
		b++;
		PrintAB(a, b);               //  -> ��������Ժ�������չ������������ֱ�Ӳ��뺯�����ô�
	}
	return 0;
}

#endif

#if 0
using namespace std;

inline void PrintAB(int a, int b) {
	cout << "a:" << a << " " << "b:" << b << endl;
}


int main() {
	int a = 5;
	int b = 6;
	for (int i = 0; i < 10000; i++) {
		a++;
		b++;
		PrintAB(a, b);               //  -> ��������Ժ�������չ������������ֱ�Ӳ��뺯�����ô�
	}
	return 0;
}
#endif

//���Ը������Ĳ�����һ��Ĭ��ֵ����ʱ�Ϳ����޲ε��ã����β���ΪĬ��ֵ
//���вε��ã����βλ��������մ��ݵ�ʵ��

#if 0
using namespace std;

void test1(int a = 20) {
	cout << a << endl;;
}

int main() {
	int b = 40;
	test1();
	test1(b);

	return 0;
}

#endif

#if 0
using namespace std;

void test1(int a, int=30) {
	cout << "yes" << endl;
}

int main() {
	test1(20);
	return 0;
}
#endif