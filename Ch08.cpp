//01 const 

//#include <iostream>
//using namespace std;
//
//class Simple
//{
//private:
//	int num;
//public:
//	Simple(int n) : num(n){ }
//	void addnum(int n)
//	{
//		num += n;
//	}
//	void showdata() const
//	{
//		cout << "num(const): " << num << endl;
//	}
//	void showdata() 
//	{
//		cout << "num(not const): " << num << endl;
//	}
//};
//int main(void)
//{
//	const Simple obj1(10);
//	Simple obj2(10);
//	//obj1.addnum(20); //����(������ �Ұ�)
//	obj2.addnum(20);	
//	
//	obj1.showdata();	//const�� ���
//	obj2.showdata();	//�⺻�� ���
//	return 0;
//}


//02 friend

//#include <iostream>
//#include <string>
//using namespace std;
//class A {
//private :
//	int x;
//	friend class B;
//	friend class C;
//	friend void showX(A& ref);
//};
//
//class B {
//public :
//	void showX(A& ref) {
//		cout << "A num From B : " << ref.x << endl;
//	}
//};
//class C {
//public:
//	void showX(A& ref) {
//		cout << "A num From C : " << ref.x << endl;
//	}
//};
//
//void showX(A& ref) 
//{
//	cout << "A �� x : " << ref.x << endl;
//}
//
//int main()
//{
//
//	return 0;
//}


//03 static - �������

//#include <iostream>
//using namespace std;
//
//class A {
//public:
//	static int x;	//��ü�̻����ÿ��� �����Ǵ� ���
//	int y;
//	A(int y):y(y) {}
//	void showXY() {
//		cout << "X : " << x << " Y : " << y << endl;
//	}
//};
//int A::x = 150;	//��������� �ʱⰪ ������ ��ü�����ø��� �ʱⰪ ����... �����߻�
//int main()
//{
//	
//	A ob1(20);
//	A ob2(30);
//	ob1.showXY();
//	ob2.showXY();
//	A::x = 200;
//	cout << "------------------" << endl;
//	ob1.showXY();
//	ob2.showXY();
//}