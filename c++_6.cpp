#define _CRT_SECURE_NO_WARNINGS 1


#include<iostream>

using namespace std;

#if 0

class People {
public:
	char name[20];
	char job[20];
	int age;
	void run() {
		cout << "���ܲ�" << endl;
	}
	void eat() {
		cout << "�ڳԷ�" << endl;
	}

private:
	void test() {
		cout << "hello" << endl;
	}
};

//����ṹ��������벻ͬ

//ѧ����������Ů�����ϰ�ȶ����ˣ����Դ���һ���˵���
//���Ƕ����ܲ����Է���˯���ȣ����ǿ��������д������ǵĺ�������


int main() {
	People student_1;
	strcpy(student_1.name, "С��");
	strcpy(student_1.job, "ѧ��");

	People boss_1;
	strcpy(boss_1.name, "С��");
	strcpy(boss_1.job, "�ϰ�");

	cout <<student_1.job<< student_1.name;
	student_1.eat();              //ѧ���ڳԷ�
	cout << endl;

	cout <<boss_1.job<< boss_1.name;
	boss_1.run();                 //�ϰ����ܲ�
	cout << endl;

	return 0;
}

#endif

#if 0
class People {         //��������

	//���Ʒ���Ȩ�ޣ���public��private����
	//public�µĳ�Ա�����ͷ�������������ڲ����ⲿ���ʺ�ʹ��
	//private�µĳ�Ա�����ͷ���ֻ��������ڲ����ʺ�ʹ��
	//{}�ڳ�Ϊ����ڲ��������Ϊ����ⲿ
public:
	//�����Ա����
	char name[20];
	int age;

	//�����Ա����
	void run() {
		cout << "���ܲ�" << endl;
	}
	void sleep() {
		cout << "��˯��" << endl;
	}

private:
	char password[20];
};


class Animal {          //����������
public:
	char kind[20];
	char color[20];

	void run() {
		cout << color << "��" << kind << "���ܲ�" << endl;        //����ķ���ʹ�ø���ĳ�Ա����
	}
	void sleep() {
		cout << color << "��" << kind << "��˯��" << endl;
	}
};

int main() {
	Animal chicken;                  //�������������
	Animal dog;                      //�������������

	strcpy(chicken.kind, "chicken");  //�ö��������Ϊ�� 
	strcpy(chicken.color, "yellow");  //�ö������ɫΪ��ɫ

	chicken.run();                    //������Ķ��󼦵��ö�����ķ����������ܲ�
	chicken.sleep();                  //����˯��

	return 0;
}

#endif 