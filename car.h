#pragma once
class car			// 클래스 선언
{
public:				// 접근지정자 - 멤버에 대한 접근 범위 지정
	char owner[10];	// 속성 - 멤버변수
	int speed;
	int fuel;
	char cupholder1[20];
	char cupholder2[20];

public:
	car();
	car(const char* owner, int speed, int fuel);
	void Accel();
	void Break();
	void AddCupHolder(const char* cup1);
	void AddCupHolder(const char* cup1, const char* cup2);
	void Info();
};