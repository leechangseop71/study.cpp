//Ŭ���� �Ӽ�-��� �����غ���

//����
// 
//�Ӽ� : �� , �Ѹ�, ���� , ���� ,ǰ��... 
//��� : ���ռ��ϱ� , ������ϱ� , ���Ÿα�
// 
//�ڵ���
//�Ӽ�	: ������,����,����ӵ�,���ᷮ...
//���	: �����ϱ�,�����ϱ�,������ѱ�....�õ��ɱ�..
// 
//������
//�Ӽ�	: ���÷���,Fan , Vane , ...., ���ʺ�Һ���..,SN..
//���	: ��ǳ,����,ON,OFF..�µ�����..
// 
//��ǻ��
//�Ӽ�	: SN,CPUSpec,RAMSpec,DISKSpec......
//���	: ON/OFF,APpstart...


//01 Ŭ���� �⺻ - �Ӽ� ����

//#include <iostream>
//using namespace std;
//
//class Car	//Ŭ���� ����
//{
//public:		//���������� - ����� ���� ���� ���� ����
//	char owner[10];	//�Ӽ� - �������
//	int speed;
//	int fuel;
//};
//
//int main()
//{
//	Car hongCar = { "ȫ�浿",0,100 };
//	cout << hongCar.owner << "," << hongCar.speed << "," << hongCar.fuel << endl;
//
//	return 0;
//}


// ����

//#include <iostream>
//using namespace std;
//class Computer
//{
//public : 
//	char sn[10];
//	char CPUSpec[5];
//	char RAMSpec[5];
//	char DISKSpec[5];
//};
//
//int main()
//{
//	Computer com1 = { "1010-2222","I7","16G","1T" };
//	cout << com1.sn << endl;		//"1010-2222" ���
//	cout << com1.CPUSpec << endl;	//"I7" ���
//	cout << com1.RAMSpec << endl;	//"16G" ���
//	cout << com1.DISKSpec << endl;	//"1T" ���
//
//	return 0;
//}


//02 Ŭ���� �⺸ - ��� ����

//#include <iostream>
//using namespace std;
//
//class car			// Ŭ���� ����
//{
//public:				// ���������� - ����� ���� ���� ���� ����
//	char owner[10];	// �Ӽ� - �������
//	int speed;
//	int fuel;
//public:
//	void Accel() { cout << "�����մϴ�" << endl; }
//	void Break() { cout << "�����մϴ�" << endl; }
//	void Info(){
//		cout << "owner : " << owner << endl;
//		cout << "speed : " << speed << endl;
//		cout << "fuel  : " << fuel << endl;
//	}
//};
//
//int main()
//{
//	car hongcar = { "ȫ�浿",0,100 };
//	//cout << hongcar.owner << "," << hongcar.speed << "," << hongcar.fuel << endl;
//	hongcar.Accel(); hongcar.Accel();
//	hongcar.Break();
//	hongcar.Info();
//
//
//	return 0;
//}


//����
//��ǻ�� Ŭ�������� �����ѱ�, ���� ���� ����Լ��� �߰��ϼ���
//�����ѱ� : void PowerOn();	//������ �մϴ�.
//�������� : void PowerOff();	//������ ���ϴ�.
//���ý��� : void AppStart();	//���� ���� �մϴ�.

//#include <iostream>
//using namespace std;
//class Computer
//{
//public : 
//	char sn[10];
//	char CPUSpec[5];
//	char RAMSpec[5];
//	char DISKSpec[5];
//public :
//	void PowerOn() { cout << "������ �մϴ�" << endl; };
//	void PowerOff() { cout << "������ ���ϴ�" << endl; };
//	void AppStart() { cout << "���� ���� �մϴ�" << endl; };
//};
//
//int main()
//{
//	Computer com1 = { "1010-2222","I7","16G","1T" };
//	cout << com1.sn << endl;		//"1010-2222" ���
//	cout << com1.CPUSpec << endl;	//"I7" ���
//	cout << com1.RAMSpec << endl;	//"16G" ���
//	cout << com1.DISKSpec << endl;	//"1T" ���
//
//	return 0;
//}




//03 ����Լ� �����ε�

//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class car			// Ŭ���� ����
//{
//public:				// ���������� - ����� ���� ���� ���� ����
//	char owner[10];	// �Ӽ� - �������
//	int speed;
//	int fuel;
//	char cpuholder1[20];
//	char cpuholder2[20];
//public:
//	void Accel() { cout << "�����մϴ�" << endl; }
//	void Break() { cout << "�����մϴ�" << endl; }
//	void AddCupHolder(const char * cup1) //����� 1��
//	{
//		strcpy_s(cpuholder1, sizeof(cpuholder1),cup1);
//		strcpy_s(cpuholder2, sizeof(cpuholder2), "����");
//	}
//	void AddCupHolder(const char* cup1, const char* cup2) //����� 2��
//	{
//		strcpy_s(cpuholder1, sizeof(cpuholder1), cup1);
//		strcpy_s(cpuholder2, sizeof(cpuholder2), cup2);
//	}
//	void Info(){
//		cout << "owner : " << owner << endl;
//		cout << "speed : " << speed << endl;
//		cout << "fuel  : " << fuel << endl;
//		cout << "cup1 : " << cpuholder1 << endl;
//		cout << "cup2 : " << cpuholder2 << endl;
//	}
//};
//int main()
//{
//	car hongcar = { "ȫ�浿",0,100 };
//	hongcar.AddCupHolder("�Ƹ޸�ī��","����");
//	hongcar.Accel(); hongcar.Accel();
//	hongcar.Break();
//	hongcar.Info();
//	return 0;
//}



//����
//AppStart�Լ��� ���������� �����ε� �غ�����
//�����ϱ� �Լ�() : AppStart(const char * app1 )	-> 1 app1�� �����մϴ� �� ���
//�����ϱ� �Լ�() : AppStart(const char * app1 , const char * app2)  1 app1 , 2 app2  �� �����մϴ� �� ���
//�����ϱ� �Լ�() : AppStart(const char * app1 , const char * app2, const char * app3) 1 app1 , 2 app2 , 3 app3 �� �����մϴ� �� ���

//#include <iostream>
//using namespace std;
//class Computer
//{
//public : 
//	char sn[10];
//	char CPUSpec[5];
//	char RAMSpec[5];
//	char DISKSpec[5];
//public :
//	void PowerOn() { cout << "������ �մϴ�" << endl; };
//	void PowerOff() { cout << "������ ���ϴ�" << endl; };
//	void AppStart() { cout << "���� ���� �մϴ�" << endl; };
//	void AppStart(const char* app1) {
//		cout << app1 << " �� �����մϴ�." << endl;
//	}
//	void AppStart(const char* app1, const char* app2) {
//		cout << app1 << ","<<app2<<" �� �����մϴ�." << endl;
//	}
//	void AppStart(const char* app1, const char* app2, const char* app3) {
//		cout << app1 << "," << app2 << "," << app3  << " �� �����մϴ�." << endl;
//	}
//};
//int main()
//{
//	Computer com1 = { "1010-2222","I7","16G","1T" };
//	com1.AppStart("Excel");
//	com1.AppStart("�޸���","�����е�");
//	com1.AppStart("�޸���", "�����е�","����ã��");
//	cout << com1.sn << endl;		//"1010-2222" ���
//	cout << com1.CPUSpec << endl;	//"I7" ���
//	cout << com1.RAMSpec << endl;	//"16G" ���
//	cout << com1.DISKSpec << endl;	//"1T" ���
//
//	return 0;
//}


//04 ����Լ����� �������������(this�����)

//#include <iostream>
//#include <cstring>
//#include <Windows.h>
//using namespace std;
//
//class car			// Ŭ���� ����
//{
//public:				// ���������� - ����� ���� ���� ���� ����
//	char owner[10];	// �Ӽ� - �������
//	int speed;
//	int fuel;
//	char cpuholder1[20];
//	char cpuholder2[20];
//public:
//	void Accel() { 
//
//		//���ᷮüũ(fuel<0) 
//		//���� �ϱ�(���ӽ� ���ᷮ -5)
//		//����ӵ� + 10 
//		//�ִ�ü� 200km/h
//		if (this->fuel - 5 < 0) {
//			cout << "���ᰡ �����մϴ�..." << endl;
//			return;
//		}
//		fuel -= 5;
//		if (this->speed + 10 >= 200) {
//			this->speed = 200;
//			cout << "�ִ� �ӵ� �Դϴ�. ����ӵ� : 200km/h" << endl;
//		}
//		else {
//			this->speed += 10;
//			cout << "����ӵ� : "<< this->speed <<"km/h" << endl;
//		}
//
//	}
//	void Break() {
//		//����ӵ� üũ
//		//����ӵ� -5
//		if (this->speed-5<0) {
//			this->speed = 0;
//			cout << "���� �����մϴ�." << endl;
//			return;
//		}
//
//		this->speed -= 5;
//		cout << "�����մϴ�..����ӵ� : " << this->speed << "km/h" << endl;
//	
//	}
//	void AddCupHolder(const char * cup1) //����� 1��
//	{
//		strcpy_s(cpuholder1, sizeof(cpuholder1),cup1);
//		strcpy_s(cpuholder2, sizeof(cpuholder2), "����");
//	}
//	void AddCupHolder(const char* cup1, const char* cup2) //����� 2��
//	{
//		strcpy_s(cpuholder1, sizeof(cpuholder1), cup1);
//		strcpy_s(cpuholder2, sizeof(cpuholder2), cup2);
//	}
//	void Info(){
//		cout << "owner : " << owner << endl;
//		cout << "speed : " << speed << endl;
//		cout << "fuel  : " << fuel << endl;
//		cout << "cup1 : " << cpuholder1 << endl;
//		cout << "cup2 : " << cpuholder2 << endl;
//	}
//};
//int main()
//{
//	car hongcar = { "ȫ�浿",0,100 };
//	hongcar.AddCupHolder("�Ƹ޸�ī��","����");
//	hongcar.Accel(); hongcar.Accel();
//	hongcar.Break();
//	hongcar.Info();
//
//	while (true)
//	{
//		hongcar.Accel();
//		Sleep(1000);
//
//	}
//	return 0;
//}


//05 �������Լ�
// ��ü ������ �ʿ��� �ʱⰪ �ο�
// Ŭ������� ����
// �Ű������� ������ ���� �ܺηκ��� �ʱⰪ�� ���޹޾� ��ü�ʱⰪ ����
// ��ȯ�ڷ����� ����
// ��ü�����ÿ� 1ȸ ȣ��
// �������Լ��� Ŭ���������� ��������ʴ� ���� �����Ϸ��� ���� �⺻������
// ���ԵǴ� �����ڸ� ���� �����Ѵ�(����Ʈ������)


//#include <iostream>
//using namespace std;
//
//class Simple {
//public : 
//	int x;
//	int y;
//public :
//	Simple() {
//		cout << "����Ʈ ������ ȣ��" << endl;
//		x = 0; y = 0;
//	}
//	Simple(int x){
//		cout << "Simple(int) ������ ȣ��" << endl;
//		this->x = x;
//		this->y = 0;
//	}
//	Simple(int x , int y){
//		cout << "Simple(int,int) ������ ȣ��" << endl;
//		this->x = x;
//		this->y = y;
//	}
//	void Info() {
//		cout << this->x << "," << this->y << endl;
//	}
//};
//int main()
//{
//	Simple obj1;	obj1.Info();			//��ü �����Ϸ�!
//	Simple obj2(100); obj2.Info();
//	Simple obj3(100, 200); obj3.Info();
//
//	return 0;
//}



//���� - �������Լ��� ���� �ʱⰪ �ο�

//#include <iostream>
//#include <cstring>
//#include <Windows.h>
//using namespace std;
//
//class car			// Ŭ���� ����
//{
//public:				// ���������� - ����� ���� ���� ���� ����
//	char owner[10];	// �Ӽ� - �������
//	int speed;
//	int fuel;
//	char cpuholder1[20];
//	char cpuholder2[20];
//public:
//	car() {}
//	car(const char * owner , int speed, int fuel) {
//		strcpy_s(this->owner, sizeof(this->owner), owner);	//������� owner �� �ܺηκ��� ���� owner ����	
//		this->speed = speed;								//������� speed �� �ܺηκ��� ���� speed ����		
//		this->fuel = fuel;									//������� fuel �� �ܺηκ��� ���� fuel ����
//
//	}
//	void Accel() { 
//
//		//���ᷮüũ(fuel<0) 
//		//���� �ϱ�(���ӽ� ���ᷮ -5)
//		//����ӵ� + 10 
//		//�ִ�ü� 200km/h
//		if (this->fuel - 5 < 0) {
//			cout << "���ᰡ �����մϴ�..." << endl;
//			return;
//		}
//		fuel -= 5;
//		if (this->speed + 10 >= 200) {
//			this->speed = 200;
//			cout << "�ִ� �ӵ� �Դϴ�. ����ӵ� : 200km/h" << endl;
//		}
//		else {
//			this->speed += 10;
//			cout << "����ӵ� : "<< this->speed <<"km/h" << endl;
//		}
//
//	}
//	void Break() {
//		//����ӵ� üũ
//		//����ӵ� -5
//		if (this->speed-5<0) {
//			this->speed = 0;
//			cout << "���� �����մϴ�." << endl;
//			return;
//		}
//
//		this->speed -= 5;
//		cout << "�����մϴ�..����ӵ� : " << this->speed << "km/h" << endl;
//	
//	}
//	void AddCupHolder(const char * cup1) //����� 1��
//	{
//		strcpy_s(cpuholder1, sizeof(cpuholder1),cup1);
//		strcpy_s(cpuholder2, sizeof(cpuholder2), "����");
//	}
//	void AddCupHolder(const char* cup1, const char* cup2) //����� 2��
//	{
//		strcpy_s(cpuholder1, sizeof(cpuholder1), cup1);
//		strcpy_s(cpuholder2, sizeof(cpuholder2), cup2);
//	}
//	void Info(){
//		cout << "owner : " << owner << endl;
//		cout << "speed : " << speed << endl;
//		cout << "fuel  : " << fuel << endl;
//		cout << "cup1 : " << cpuholder1 << endl;
//		cout << "cup2 : " << cpuholder2 << endl;
//	}
//};
//int main()
//{
//	car hongcar("ȫ�浿",0,100);	// ������ �Լ��߰��Ͽ� �ʱⰪ �־��ݴϴ�.
//	hongcar.AddCupHolder("�Ƹ޸�ī��","����");
//	hongcar.Accel(); hongcar.Accel();
//	hongcar.Break();
//	hongcar.Info();
//
//	car test;
//	return 0;
//}
//���� 
//������ �Լ��� ������ ����Ʈ������ �Լ��� �ڵ�����
//������ �Լ��� ������ ����Ʈ������ �Լ��� ���Ե��� �ʴ´�!...



//06 �̴ϼȶ�����(:) ����� ���� �ʱⰪ �ο�

//#include <iostream>
//using namespace std;
//
//class Simple {
//public : 
//	int x;
//	int y;
//public :
//	Simple() :x(0),y(0){
//		cout << "����Ʈ ������ ȣ��" << endl;
//	}
//	Simple(int x):x(x),y(0)
//	{
//		cout << "Simple(int) ������ ȣ��" << endl;
//	}
//	Simple(int x , int y):x(x),y(y){
//		cout << "Simple(int,int) ������ ȣ��" << endl;
//	}
//	void Info() {
//		cout << this->x << "," << this->y << endl;
//	}
//};
//int main()
//{
//	Simple obj1;	obj1.Info();			//��ü �����Ϸ�!
//	Simple obj2(100); obj2.Info();
//	Simple obj3(100, 200); obj3.Info();
//
//	return 0;
//}


//���� - �̴ϼȶ����� �߰�
 
//#include <iostream>
//#include <cstring>
//#include <Windows.h>
//using namespace std;
//
//class car			// Ŭ���� ����
//{
//public:				// ���������� - ����� ���� ���� ���� ����
//	char owner[10];	// �Ӽ� - �������
//	int speed;
//	int fuel;
//	char cpuholder1[20];
//	char cpuholder2[20];
//public:
//	car() {}
//	car(const char * owner , int speed, int fuel):speed(speed),fuel(fuel) {
//		strcpy_s(this->owner, sizeof(this->owner), owner);	//������� owner �� �ܺηκ��� ���� owner ����	
//	}
//	void Accel() { 
//
//		//���ᷮüũ(fuel<0) 
//		//���� �ϱ�(���ӽ� ���ᷮ -5)
//		//����ӵ� + 10 
//		//�ִ�ü� 200km/h
//		if (this->fuel - 5 < 0) {
//			cout << "���ᰡ �����մϴ�..." << endl;
//			return;
//		}
//		fuel -= 5;
//		if (this->speed + 10 >= 200) {
//			this->speed = 200;
//			cout << "�ִ� �ӵ� �Դϴ�. ����ӵ� : 200km/h" << endl;
//		}
//		else {
//			this->speed += 10;
//			cout << "����ӵ� : "<< this->speed <<"km/h" << endl;
//		}
//
//	}
//	void Break() {
//		//����ӵ� üũ
//		//����ӵ� -5
//		if (this->speed-5<0) {
//			this->speed = 0;
//			cout << "���� �����մϴ�." << endl;
//			return;
//		}
//
//		this->speed -= 5;
//		cout << "�����մϴ�..����ӵ� : " << this->speed << "km/h" << endl;
//	
//	}
//	void AddCupHolder(const char * cup1) //����� 1��
//	{
//		strcpy_s(cpuholder1, sizeof(cpuholder1),cup1);
//		strcpy_s(cpuholder2, sizeof(cpuholder2), "����");
//	}
//	void AddCupHolder(const char* cup1, const char* cup2) //����� 2��
//	{
//		strcpy_s(cpuholder1, sizeof(cpuholder1), cup1);
//		strcpy_s(cpuholder2, sizeof(cpuholder2), cup2);
//	}
//	void Info(){
//		cout << "owner : " << owner << endl;
//		cout << "speed : " << speed << endl;
//		cout << "fuel  : " << fuel << endl;
//		cout << "cup1 : " << cpuholder1 << endl;
//		cout << "cup2 : " << cpuholder2 << endl;
//	}
//};
//int main()
//{
//	car hongcar("ȫ�浿",0,100);	// ������ �Լ��߰��Ͽ� �ʱⰪ �־��ݴϴ�.
//	hongcar.AddCupHolder("�Ƹ޸�ī��","����");
//	hongcar.Accel(); hongcar.Accel();
//	hongcar.Break();
//	hongcar.Info();
//
//	car test;
//	return 0;
//}
//���� 
//������ �Լ��� ������ ����Ʈ������ �Լ��� �ڵ�����
//������ �Լ��� ������ ����Ʈ������ �Լ��� ���Ե��� �ʴ´�!...


//���� 

//#include <iostream>
//#include <cstring>
//using namespace std;
//class Computer
//{
//public : 
//	char sn[10];
//	char CPUSpec[5];
//	char RAMSpec[5];
//	char DISKSpec[5];
//public :
//	Computer(const char *sn , const  char *cpu , const  char* ram , const char* disk) {
//		strcpy_s(this->sn, sizeof(this->sn), sn);
//		strcpy_s(this->CPUSpec, sizeof(this->CPUSpec), cpu);
//		strcpy_s(this->RAMSpec, sizeof(this->RAMSpec), ram);
//		strcpy_s(this->DISKSpec, sizeof(this->DISKSpec), disk);
//	}
//	void PowerOn() { cout << "������ �մϴ�" << endl; };
//	void PowerOff() { cout << "������ ���ϴ�" << endl; };
//	void AppStart() { cout << "���� ���� �մϴ�" << endl; };
//	void AppStart(const char* app1) {
//		cout << app1 << " �� �����մϴ�." << endl;
//	}
//	void AppStart(const char* app1, const char* app2) {
//		cout << app1 << ","<<app2<<" �� �����մϴ�." << endl;
//	}
//	void AppStart(const char* app1, const char* app2, const char* app3) {
//		cout << app1 << "," << app2 << "," << app3  << " �� �����մϴ�." << endl;
//	}
//};
//int main()
//{
//	Computer com1( "1010-2222","I7","16G","1T"); //�������Լ��� ��ü �����ϱ�!
//	com1.AppStart("Excel");
//	com1.AppStart("�޸���","�����е�");
//	com1.AppStart("�޸���", "�����е�","����ã��");
//	cout << com1.sn << endl;		//"1010-2222" ���
//	cout << com1.CPUSpec << endl;	//"I7" ���
//	cout << com1.RAMSpec << endl;	//"16G" ���
//	cout << com1.DISKSpec << endl;	//"1T" ���
//
//	return 0;
//}


//07 �Ҹ����� ���
//��ü �Ҹ�ÿ� ���
//Ŭ������� �����ϸ� �Լ��� �տ� ~�� ���δ�

//#include <iostream>
//using namespace std;
//
//class Simple
//{
//public :
//	int x;
//public : 
//	Simple(int x) {
//		this->x = x;
//		cout << "Simple(x)������ ���!" << endl;
//	}
//	~Simple() {
//		cout << "����Ʈ �Ҹ��� ���! x="<<this->x << endl;
//	}
//};
//int main()
//{
//	Simple ob1(10);
//	cout << "ob1.x = " << ob1.x << endl;
//	Simple ob2(20);
//	cout << "ob2.x = " << ob2.x << endl;
//
//}


//08 ��������(����������)
//public		: �ܺο��� ����� ���� ���
//protected		: ��Ӱ��迡�� ����Ŭ������ ����� ����Ŭ������ ���� ���
//private		: �ܺο��� ���� �Ұ�(�������п� ���)

//08-01 �⺻ ����

//#include <iostream>
//#include <cstring>
//using namespace std;
//class Person {
//public :
//	char name[30];
//private :
//	int age;
//	double weight;
//	double height;
//public :
//	Person(const char * name)
//	{
//		strcpy_s(this->name, sizeof(this->name), name);
//		age = 0; weight = 0.0; height = 0.0;
//		cout << "Person(char* name) ������ ȣ��!" << endl;
//	}
//	//Getter and Setter �Լ� �߰�
//	void setAge(int age) {
//		this->age = age;
//	}
//	int getAge() {
//		return this->age;
//	}
//	void setWeight(double weight) {
//		this->weight = weight;
//	}
//	double getWeight() {
//		return this->weight;
//	}
//	void setHeight(double height) {
//		this->height = height;
//	}
//	double getHeight() {
//		return this->height;
//	}
//
//	//ShowInfo
//	void ShowMemberInfo() {
//		cout << "name : " << this->name << endl;
//		cout << "age : " << this->age << endl;
//	}
//
//};
//int main() {
//	Person hong("ȫ�浿");
//	hong.setAge(30);
//	hong.ShowMemberInfo();
//
//	return 0;
//}

//08-02 �ʱⰪ ���� �Ұ� / ��ȸ ����

//#include <iostream>
//#include <cstring>
//using namespace std;
//class Person {
//public :
//	char name[30];
//private :
//	int age;
//	double weight;
//	double height;
//
//public :
//	Person(const char * name,int age,double weight,double height): age(age),weight(weight),height(height)
//	{
//		strcpy_s(this->name, sizeof(this->name), name);
//		cout << "Person(char* name) ������ ȣ��!" << endl;
//	}
//	//Getter�Լ� �߰�
//	int getAge() {
//		return this->age;
//	}
//	double getWeight() {
//		return this->weight;
//	}
//	double getHeight() {
//		return this->height;
//	}
//	//ShowInfo
//	void ShowMemberInfo() {
//		cout << "name : " << this->name << endl;
//		cout << "age : " << getAge() << endl;
//		cout << "weight : " << getWeight() << endl;
//		cout << "height : " << getHeight() << endl;
//	}
//
//};
//int main() {
//	Person hong("ȫ�浿",40,70.5,177.5);
//	hong.ShowMemberInfo();
//	
//
//	return 0;
//}


//09 Ŭ���������� ����Լ� ����

//#include <iostream>
//#include <cstring>
//using namespace std;
//class Person {
//public :
//	char name[30];
//private :
//	int age;
//	double weight;
//	double height;
//public :
//	Person(const char* name);
//	//Getter and Setter �Լ� �߰�
//	void setAge(int age);		//���� �Լ���ü{}�� Ŭ������ ���� �ִٸ� �ڵ� inlineȭ�� �ȴ�..�ܺη� �����߱⶧����inline x
//	int getAge();
//	void setWeight(double weight);
//	double getWeight();
//	void setHeight(double height);
//	double getHeight();
//	void ShowMemberInfo();
//};
//int main() {
//	Person hong("ȫ�浿");
//	hong.setAge(30);
//	hong.ShowMemberInfo();
//
//	return 0;
//}
//Person::Person(const char* name)
//{
//	strcpy_s(this->name, sizeof(this->name), name);
//	age = 0; weight = 0.0; height = 0.0;
//	cout << "Person(char* name) ������ ȣ��!" << endl;
//}
//
//inline void Person::setAge(int age) {
//	this->age = age;
//}
//inline int Person::getAge() {
//	return this->age;
//}
//inline void Person::setWeight(double weight) {
//	this->weight = weight;
//}
//inline double Person::getWeight() {
//	return this->weight;
//}
//inline void Person::setHeight(double height) {
//	this->height = height;
//}
//inline double Person::getHeight() {
//	return this->height;
//}
////ShowInfo
//inline void Person::ShowMemberInfo() {
//	cout << "name : " << this->name << endl;
//	cout << "age : " << this->age << endl;
//}



//���� Ŭ�������� �Լ��� main�Լ� �Ʒ��� �����ϰ� inlineȭ �ϼ���

//#include <iostream>
//#include <cstring>
//#include <Windows.h>
//using namespace std;
//
//class car			// Ŭ���� ����
//{
//public:				// ���������� - ����� ���� ���� ���� ����
//	char owner[10];	// �Ӽ� - �������
//	int speed;
//	int fuel;
//	char cpuholder1[20];
//	char cpuholder2[20];
//public:
//	car();
//	car(const char* owner, int speed, int fuel);
//	void Accel();
//	void Break();
//	void AddCupHolder(const char* cup1);
//	void AddCupHolder(const char* cup1, const char* cup2);
//	void Info();
//};
//int main()
//{
//	car hongcar("ȫ�浿",0,100);	// ������ �Լ��߰��Ͽ� �ʱⰪ �־��ݴϴ�.
//	hongcar.AddCupHolder("�Ƹ޸�ī��","����");
//	hongcar.Accel(); hongcar.Accel();
//	hongcar.Break();
//	hongcar.Info();
//
//	car test;
//	return 0;
//}
//
//car::car() {}
//car::car(const char* owner, int speed, int fuel) {
//	strcpy_s(this->owner, sizeof(this->owner), owner);	//������� owner �� �ܺηκ��� ���� owner ����	
//	this->speed = speed;								//������� speed �� �ܺηκ��� ���� speed ����		
//	this->fuel = fuel;									//������� fuel �� �ܺηκ��� ���� fuel ����
//
//}
//void car::Accel() {
//	if (this->fuel - 5 < 0) {
//		cout << "���ᰡ �����մϴ�..." << endl;
//		return;
//	}
//	fuel -= 5;
//	if (this->speed + 10 >= 200) {
//		this->speed = 200;
//		cout << "�ִ� �ӵ� �Դϴ�. ����ӵ� : 200km/h" << endl;
//	}
//	else {
//		this->speed += 10;
//		cout << "����ӵ� : " << this->speed << "km/h" << endl;
//	}
//
//}
//void car::Break() {
//	if (this->speed - 5 < 0) {
//		this->speed = 0;
//		cout << "���� �����մϴ�." << endl;
//		return;
//	}
//
//	this->speed -= 5;
//	cout << "�����մϴ�..����ӵ� : " << this->speed << "km/h" << endl;
//
//}
//void car::AddCupHolder(const char* cup1) //����� 1��
//{
//	strcpy_s(cpuholder1, sizeof(cpuholder1), cup1);
//	strcpy_s(cpuholder2, sizeof(cpuholder2), "����");
//}
//void car::AddCupHolder(const char* cup1, const char* cup2) //����� 2��
//{
//	strcpy_s(cpuholder1, sizeof(cpuholder1), cup1);
//	strcpy_s(cpuholder2, sizeof(cpuholder2), cup2);
//}
//void car::Info() {
//	cout << "owner : " << owner << endl;
//	cout << "speed : " << speed << endl;
//	cout << "fuel  : " << fuel << endl;
//	cout << "cup1 : " << cpuholder1 << endl;
//	cout << "cup2 : " << cpuholder2 << endl;
//}