#pragma once
class car			// Ŭ���� ����
{
public:				// ���������� - ����� ���� ���� ���� ����
	char owner[10];	// �Ӽ� - �������
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