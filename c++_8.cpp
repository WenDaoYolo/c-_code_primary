#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

#if 0
class Date {
	int year;                     //Ĭ������¿��Ʒ���Ȩ��Ϊprivate
	int date;
public:
	int GetYear() {
		return year;              //���ڲ�ͨ���ӿڷ�����ֵ����
	}
	void SetYear(int new_year) {
		year = new_year;            //���ⲿ���Σ����ڲ��޸�
	}
};

int main() {
	Date d;
	d.SetYear(2005);
	cout << d.GetYear() << endl;

	return 0;
}
#endif

#if 0
class Dog {
public:
	char name[20];
	char* food;
};

void eat(char dog[], const char* food) {
	cout << dog << "��" << food << endl;
}

int main() {
	Dog d;
	strcpy(d.name, "��");
	eat(d.name, "��");

	return 0;
}

#endif

#if 0
class Dog {
public:
	char name[20];
	char* food;

	void eat(const char* food) {
		cout << name << "��" << food << endl;
	}
};

int main() {
	Dog d;
	strcpy(d.name, "��");
	d.eat("��");                  //��.eat(��)

	return 0;
}

#endif

#if 0
#define PI 3.14

double CircleLength(double r){
	double result = 2 * PI * r;
	return result;
}

double CircleArea(double r) {
	double result = PI * r * r;
	return result;
}

int main() {
	double r;
	cout << "Please input the r:" << endl;
	cin >> r;
	cout << "Բ�������" << CircleArea(r) << endl;
	cout << "Բ���ܳ���" << CircleLength(r) << endl;
}

#endif 0

#if 0
#define PI 3.14

class Circle {
public:

	void InputTheR() {
		cout << "Please input the r:" << endl;
		cin >> r;
	}

	double area() {
		double area = PI * r * r;
		cout << "Բ�����:" <<area<< endl;
		return area;
	}

	double length() {
		double length = 2 * PI * r;
		cout << "Բ���ܳ�:" << length << endl;
		return length;
	}

private:
	double r;
};

int main() {
	Circle c;
	c.InputTheR();
	c.area();
	c.length();

	return 0;
}
#endif 
