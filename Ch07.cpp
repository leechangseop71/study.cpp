//01 ��������� ����

//#include <iostream>
//using namespace std;
//
//class SoSlmple
//{
//public:
//	int x;
//	int y;
//	SoSlmple(int x, int y){
//		this->x = x; this->y = y;
//		cout << "SoSlmple(int x, int y) ������ ȣ��!" << endl;
//	}
//	//����Ʈ ���������
//	SoSlmple(const SoSlmple& ref) {
//		cout << "����Ʈ ���� ������ ȣ��!" << endl;
//		this->x = ref.x;
//		this->y = ref.y;
//	}
//};
//int main()
//{
//	//�Ϲ� �ڷ��� ����
//	//int num1 = 10;
//	//int num2 = num1;
//	//int num3(num2);	//C++���� ���Ǵ� ����..num3���������� num2���� �ʱⰪ���� ������
//	//cout << num1 << num2 << num3 << endl;
//
//	//��ü ��������� ȣ�� �ʱⰪ �ο�
//	SoSlmple obj1(1, 2);
//	SoSlmple obj2 = obj1;	// SoSlmple obj2(obj1) ����Ʈ ����������� ȣ��
//	SoSlmple obj3(obj2);	//����Ʈ ����������� ȣ��
//	cout << obj2.x << "," << obj2.y << endl;
//	cout << obj3.x << "," << obj3.y << endl;
//
//	return 0;
//}

//02 ����

//#include <iostream>
//using namespace std;
//class SimpleA {
//public:
//	int x;
//	int y;
//	SimpleA(int a, int b) :x(a), y(b) {}
//	//����Ʈ ������ �����(x=0 , y������)
//	SimpleA(const SimpleA& ref) {
//		this->x = 0;
//		this->y = ref.y;
//	}
//};
//class SimpleB {
//public:
//	int x;
//	int y;
//	SimpleB(int a, int b) :x(a), y(b) {}
//	//����Ʈ ������ �����(x����,y=0);
//	SimpleB(const SimpleB& ref) {
//		this->x = ref.x;
//		this->y = 0;
//	}
//};
//int main()
//{
//	SimpleA obj1(10, 20);
//	SimpleA obj2 = obj1;	//��������� ȣ�� ����
//	cout << obj2.x << "," << obj2.y << endl << endl;	
//	SimpleB obj3(30, 40);
//	SimpleB obj4(obj3);		//��������� ȣ�� ����
//	cout << obj4.x << "," << obj4.y << endl << endl;
//	return 0;
//}


//03 ��������� ȣ�� ���� - �Ű������϶� ȣ��Ǵ� ���������

//#include <iostream>
//using namespace std;
//class SimpleA {
//public:
//	int x;
//	int y;
//	SimpleA(int a, int b) :x(a), y(b) {
//		cout << "SimpleA(int a, int b) ������ȣ��" << endl;
//	}
//	SimpleA(const SimpleA& ref) {
//		this->x = ref.x;
//		this->y = ref.y;
//		cout << "��������� ȣ��!!" << endl;
//	}
//	void func(SimpleA obj)  //SimpleA obj = ob2; -> SimpleA obj(ob2);
//	{
//		cout << "func�Լ� ȣ��!" << endl;
//	}
//};
//int main()
//{
//	SimpleA ob1(10, 20);
//	SimpleA ob2(30, 40);
//	ob1.func(ob2); //call-by-value(��ü)
//
//	return 0;
//}


//04 ��ȯ���� Ŭ�����ڷ����̸鼭 ��ü���� ���޵ɶ� - ȣ���� ��ġ�� �ӽð�ü������ ��������ڸ� ���� ���ʱ�ȭ

//#include <iostream>
//using namespace std;
//class SimpleA {
//public:
//	int x;
//	int y;
//	SimpleA(int a, int b) :x(a), y(b) {
//		cout << "SimpleA(int a, int b) ������ȣ��" << endl;
//	}
//	SimpleA(const SimpleA& ref) {
//		this->x = ref.x;
//		this->y = ref.y;
//		cout << "��������� ȣ��!!" << endl;
//	}
//	SimpleA func() 
//	{
//		return *this;
//	}
//
//};
//int main()
//{
//	SimpleA ob1(10, 20); //SimpleA(int a, int b) ������ȣ��
//	
//	ob1.func(); //��������� ȣ��!!
//
//
//	return 0;
//}