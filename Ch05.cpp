//01 this����� Ȯ��

//#include <iostream>
//using namespace std;
//
//class Simple
//{
//public:
//	int x;
//public:
//	Simple(int x) {
//		this->x = x;
//		cout << "������ ��ü �ּ� : " << this << endl;
//	}
//};
//
//int main()
//{
//
//	Simple ob1(10);
//	cout << "MAIN���� �ּ�Ȯ�� : " << &ob1 << endl;
//	Simple ob2(20);
//	cout << "MAIN���� �ּ�Ȯ�� : " << &ob2 << endl;
//
//
//	return 0;
//}

//02 self-Reference ��ȯ

//#include <iostream>
//using namespace std;
//
//class Simple
//{
//public:
//	int x;
//public:
//	Simple(int x) {
//		this->x = x;
//		cout << "������ ��ü �ּ� : " << this << endl;
//	}
//	Simple& Add(int x) {
//		this->x += x;
//		return * this;
//	}
//};
//
//int main()
//{
//
//	Simple ob1(10);
//	ob1.Add(1).Add(2).Add(3).Add(5); 
//	cout << "ob1.x = "<<ob1.x<< endl;
//
//
//	return 0;
//}