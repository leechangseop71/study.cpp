#include "car.h"
#include <cstring>
#include <iostream>
using namespace std;

car::car() {}
car::car(const char* owner, int speed, int fuel) {
	strcpy_s(this->owner, sizeof(this->owner), owner);	//멤버변수 owner 에 외부로부터 받은 owner 대입	
	this->speed = speed;								//멤버변수 speed 에 외부로부터 받은 speed 대입		
	this->fuel = fuel;									//멤버변수 fuel 에 외부로부터 받은 fuel 대입

}
void car::Accel() {
	if (this->fuel - 5 < 0) {
		cout << "연료가 부족합니다..." << endl;
		return;
	}
	fuel -= 5;
	if (this->speed + 10 >= 200) {
		this->speed = 200;
		cout << "최대 속도 입니다. 현재속도 : 200km/h" << endl;
	}
	else {
		this->speed += 10;
		cout << "현재속도 : " << this->speed << "km/h" << endl;
	}

}
void car::Break() {
	if (this->speed - 5 < 0) {
		this->speed = 0;
		cout << "차가 정지합니다." << endl;
		return;
	}

	this->speed -= 5;
	cout << "감속합니다..현재속도 : " << this->speed << "km/h" << endl;

}
void car::AddCupHolder(const char* cup1) //음료수 1개
{
	strcpy_s(cupholder1, sizeof(cupholder1), cup1);
	strcpy_s(cupholder2, sizeof(cupholder2), "없음");
}
void car::AddCupHolder(const char* cup1, const char* cup2) //음료수 2개
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