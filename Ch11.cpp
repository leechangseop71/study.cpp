//01 +

//#include <iostream>
//using namespace std;
//
//class Power {
//private:
//	int kick;
//	int punch;
//public:
//	Power(int kick = 0, int punch = 0) : kick(kick),punch(punch) {}
//	Power(const Power& ref) {
//		cout << "���������ȣ��!!" << endl;
//		this->kick = ref.kick;
//		this->punch = ref.punch;
//
//	}
//	Power operator+ (Power op2) // + ������ �Լ� ���� Power op2 = b;
//	{
//		cout << "Operator + �Լ� ȣ��!" << endl;
//		Power tmp; // �ӽ� ��ü ����
//		tmp.kick = this->kick + op2.kick; // kick ���ϱ�
//		tmp.punch = this->punch + op2.punch; // punch ���ϱ�
//		return tmp; // ���� ��� ����
//	}
//
//	void show() {
//		cout << "kick=" << kick << ',' << "punch=" << punch << endl;
//	}
//};
//
//int main() {
//	Power a(3, 5), b(4, 6), c;
//	c = a + b; // �Ŀ� ��ü + ���� a.operator+(b);
//	a.show();
//	b.show();
//	c.show();
//}


//02 = 

//#include <iostream>
//using namespace std;
//
//class Simple
//{
//public :
//	int x;
//	int y;
//	Simple():x(0),y(0) {}
//	Simple(int x, int y) :x(x), y(y) { cout << "Simple(int x, int y) ������ ȣ��!" << endl; }
//	Simple(const Simple& ref) {
//		cout << "��������� ȣ��!!" << endl;
//		this->x = ref.x; this->y = ref.y;
//	}
//	Simple& operator=(Simple& ref) {
//		cout << " ����Ʈ ���Կ����Լ� ȣ��!!" << endl;
//		this->x = ref.x;
//		this->y = ref.y;
//		return *this;
//	}
//};
//int main()
//{
//	Simple ob1(10, 20);
//	//Simple ob2 = ob1; //����Ʈ ��������� ȣ�����
//	Simple ob2; //����Ʈ������ȣ���� ���� ��ü ����
//	Simple ob3;
//	ob3=ob2=ob1;	//��������� ȣ�� x
//				//����Ʈ ���Կ����Լ� ȣ�� ob2.operator=(ob1)
//	cout << ob2.x << "," << ob2.y << endl;
//	cout << ob3.x << "," << ob3.y << endl;
//	return 0;
//}
