#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>

using namespace std;

#if 0
int& ReturnB() {
	static int b = 40;        //���徲̬������������������Ҳ��������
	int& test = b;
	return test;
}

int main() {
	int& temp = ReturnB();
	ReturnB() = 50;
	cout << temp << endl;
	return 0;
}

#endif

#if 0
struct Student {
	char name[20];
	int age;
};

void ChangeStruct1(Student** s) {
	*s = (Student*)malloc(sizeof(Student));
	strcpy((*s)->name, "����");
	(*s)->age = 40;
}

void FreeStruct1(Student** s) {
	if ((*s) != NULL)
		free(*s);
	*s = NULL;               //�ں����ڽ�ʵ��ָ���ÿ�
}

int main() {
	Student* s;
	ChangeStruct1(&s);
	cout << s->name << " " << s->age << endl;
	FreeStruct1(&s);
	return 0;
}

#endif

#if 0
struct Student {
	char name[20];
	int age;
};

void ChangeStruct1(Student*& s) {               //�β�ֱ�Ӷ���һ��ָ�������
	s = (Student*)malloc(sizeof(Student));
	strcpy(s->name, "����");
	s->age = 40;
}

void FreeStruct1(Student*& s) {
	if (s != NULL)
	free(s);
	s = NULL;                                   //�ں����ڽ�ʵ��ָ���ÿ�
}

int main() {
	Student* s;
	ChangeStruct1(s);
	cout << s->name << " " << s->age << endl;
	FreeStruct1(s);
	return 0;
}

#endif

int main() {
	int b = 60;
	const int& tb = b;        //�Ͱ�ȫ�Եı��������ø߰�ȫ�Ե�����װ��

	const int a = 50;
	const int& ta = a;       //���߰�ȫ�Եı��������õͰ�ȫ�Ե�����װ��

	cout << "a:" << a << " " << "b: " << b << endl;
	return 0;
}
