//01 ��� �⺻

//#include <iostream>
//using namespace std;
//
//class Super
//{
//private:
//	int num1;
//public:
//	Super() : num1(0) {};
//	void SetNum(int n)
//	{
//		num1 = n;
//	}
//	int getNum() {
//		return num1;
//	}
//	void ShowNum()
//	{
//		cout << "num1 :" << num1<<endl;
//	}
//};
//class Sub : public Super
//{
//private : 
//	int num2;
//public : 
//	Sub(int n1,int n2){
//		SetNum(n1);
//		this->num2 = n2;
//	}
//	void ShowN1N2() {
//		cout << "num1 : " << getNum() << " num2 : " << num2 << endl;
//	}
//};
//int main()
//{
//	Sub obj(10, 20);
//	obj.ShowNum();
//	obj.ShowN1N2();
//}

//02 ��� �⺻
//��Ӱ��迡�� ����Ŭ������ ��ü�� �����ϴ� ��� ����Ŭ������ ����Ʈ ������ ȣ���� ����ȴ�
//����Ŭ�������� ��ü �����ÿ� Ư�� ����Ŭ���� ������ ȣ���� ���ؼ��� �̴ϼȶ������� ����Ŭ���������� ȣ���� �ϸ� �ȴ�.


//#include <iostream>
//using namespace std;
//
//class Super {
//public:
//	int x;
//	Super():x(0) { cout << "Super() ����Ʈ ������ ȣ��!" << endl; }
//	Super(int x) :x(x) {
//		cout << "Super(int x) ������ ȣ��!" << endl;
//	}
//};
//class Sub : public Super{
//public:
//	int y;
//	Sub() :y(0) { cout << "Sub() ����Ʈ ������ ȣ��!" << endl; }
//	Sub(int x) : Super(x),y(0){
//	
//		cout << "Sub(int x) ������ ȣ��!" << endl;
//	}
//};
//int main()
//{
//
//	//Sub ob;
//	Sub ob2(10);
//
//	return 0;
//}


//03 �������̵�(�Լ�������)
// ����Ŭ�����κ��� �����޴� �Լ��� Body�� ����Ŭ�������� ���Ļ���ϴ�(������) ����
// �������� ���� ��ȵ� �ڵ� ���


// �����ε� : �Լ��� �̸��� �״�� , �Լ��� �Ű������� �پ��ϰ� ���
// �������̵� : ��Ӱ��踦 ���� �Լ���� ����, �Լ��ٵ� �پ��ϰ� ���

//#include <iostream>
//using namespace std;
//
//class Animal {
//public:
//	void sound() {
//		cout << "�Ҹ��� ���ϴ�" << endl;
//	}
//};
//class Cat :public Animal
//{
//public:
//	void sound() {
//		cout << "�߿� �Ҹ��� ���ϴ�" << endl;
//	}
//};
//class Dog : public Animal
//{
//public:
//	void sound() {
//		cout << "�۸� �Ҹ��� ���ϴ�" << endl;
//	}
//};
//int main()
//{
//	Dog Poppi;
//	Cat Yum;
//	Poppi.sound();
//	Yum.sound();
//	return 0;
//}


//04 ��Ӱ��迡�� �Ҹ��� ȣ�� ����

//#include <iostream>
//using namespace std;
//
//class A
//{
//public:
//	A() { cout << "A ������ ȣ��" << endl; };
//	~A() { cout << "A �Ҹ��� ȣ��" << endl; };
//
//};
//class B : public A
//{
//public:
//	B() { cout << "B ������ ȣ��" << endl; };
//	~B() { cout << "B �Ҹ��� ȣ��" << endl; };
//};
//int main()
//{
//	B obj2;
//}