#include "My_Circle.h"

//�Ѿ��Ժ�����������������޶�,�����ں����ڿ���ֱ�ӷ�������ڲ�
double My_Circle::GetR() {       
	return r;
}

void My_Circle::SetR(double new_r) {
	r = new_r;
}

double My_Circle::GetCircleArea() {
	double result = r * r * 3.14;
	return result;
}

double My_Circle::GetCircleLength() {
	double result = 2 * 3.14 * r;
	return result;
}
