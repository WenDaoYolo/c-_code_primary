#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;


#if 0
class Animal {

public:
	char kind[20];
	char color[20];
	void Produce() {
		cout << "����С" << color << kind;
}
	void run() {
		cout << "�����ܲ�" << endl;
	}
	void sleep() {
		cout << "����˯��" << endl;
	}
};

int main() {
	Animal chicken;
	strcpy(chicken.kind, "��");
	strcpy(chicken.color, "��");
	chicken.Produce();
	chicken.run();

	putchar('\n');

	Animal dog;
	strcpy(dog.kind, "��");
	strcpy(dog.color, "��");
	dog.Produce();
	dog.sleep();

	return 0;
}

#endif

//
//struct Date {
//	int year;
//	int month;
//	int date;
//};


#if 0
class Date {
public:
	void InputDate() {
		cout << "year,month,date" << endl;
		cin >>year;
		cin >>month;
		cin >>date;
	}

	void IsHeapYear() {
		if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
			cout << year << "��" << month << "��" << date << "��" << "������" << endl;
		else
			cout << year << "��" << month << "��" << date << "��" << "����������" << endl;
	}

private:
	int year;
	int month;
	int date;
};

#endif 

//
//void InputDate(Date* D) {
//	cout << "year,month,date" << endl;
//	cin >> D->year;
//	cin >> D->month;
//	cin >> D->date;
//}

//void IsHeapYear(Date* D) {
//	if ((D->year % 400 == 0) || (D->year % 4 == 0 && D->year % 100 != 0))
//		cout << D->year<<"��" << D->month << "��" << D->date << "��" << "������" << endl;
//	else
//		cout << D->year<<"��" << D->month << "��" << D->date << "��" << "����������" << endl;
//}


#if 0
int main() {
	Date D;
	D.InputDate();
	D.IsHeapYear();
	

	return 0;
}

#endif

