#include "car.h"
#include <cstring>
#include <iostream>
using namespace std;

car::car() {}
car::car(const char* owner, int speed, int fuel) {
	strcpy_s(this->owner, sizeof(this->owner), owner);	//������� owner �� �ܺηκ��� ���� owner ����	
	this->speed = speed;								//������� speed �� �ܺηκ��� ���� speed ����		
	this->fuel = fuel;									//������� fuel �� �ܺηκ��� ���� fuel ����

}
void car::Accel() {
	if (this->fuel - 5 < 0) {
		cout << "���ᰡ �����մϴ�..." << endl;
		return;
	}
	fuel -= 5;
	if (this->speed + 10 >= 200) {
		this->speed = 200;
		cout << "�ִ� �ӵ� �Դϴ�. ����ӵ� : 200km/h" << endl;
	}
	else {
		this->speed += 10;
		cout << "����ӵ� : " << this->speed << "km/h" << endl;
	}

}
void car::Break() {
	if (this->speed - 5 < 0) {
		this->speed = 0;
		cout << "���� �����մϴ�." << endl;
		return;
	}

	this->speed -= 5;
	cout << "�����մϴ�..����ӵ� : " << this->speed << "km/h" << endl;

}
void car::AddCupHolder(const char* cup1) //����� 1��
{
	strcpy_s(cupholder1, sizeof(cupholder1), cup1);
	strcpy_s(cupholder2, sizeof(cupholder2), "����");
}
void car::AddCupHolder(const char* cup1, const char* cup2) //����� 2��
{
	strcpy_s(cupholder1, sizeof(cupholder1), cup1);
	strcpy_s(cupholder2, sizeof(cupholder2), cup2);
}
void car::Info() {
	cout << "owner : " << owner << endl;
	cout << "speed : " << speed << endl;
	cout << "fuel  : " << fuel << endl;
	cout << "cup1 : " << cupholder1 << endl;
	cout << "cup2 : " << cupholder2 << endl;
}