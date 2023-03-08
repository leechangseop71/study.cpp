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
//		cout << "복사생성자호출!!" << endl;
//		this->kick = ref.kick;
//		this->punch = ref.punch;
//
//	}
//	Power operator+ (Power op2) // + 연산자 함수 선언 Power op2 = b;
//	{
//		cout << "Operator + 함수 호출!" << endl;
//		Power tmp; // 임시 객체 생성
//		tmp.kick = this->kick + op2.kick; // kick 더하기
//		tmp.punch = this->punch + op2.punch; // punch 더하기
//		return tmp; // 더한 결과 리턴
//	}
//
//	void show() {
//		cout << "kick=" << kick << ',' << "punch=" << punch << endl;
//	}
//};
//
//int main() {
//	Power a(3, 5), b(4, 6), c;
//	c = a + b; // 파워 객체 + 연산 a.operator+(b);
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
//	Simple(int x, int y) :x(x), y(y) { cout << "Simple(int x, int y) 생성자 호출!" << endl; }
//	Simple(const Simple& ref) {
//		cout << "복사생성자 호출!!" << endl;
//		this->x = ref.x; this->y = ref.y;
//	}
//	Simple& operator=(Simple& ref) {
//		cout << " 디폴트 대입연산함수 호출!!" << endl;
//		this->x = ref.x;
//		this->y = ref.y;
//		return *this;
//	}
//};
//int main()
//{
//	Simple ob1(10, 20);
//	//Simple ob2 = ob1; //디폴트 복사생성자 호출시점
//	Simple ob2; //디폴트생성자호출을 통한 객체 생성
//	Simple ob3;
//	ob3=ob2=ob1;	//복사생성자 호출 x
//				//디폴트 대입연산함수 호출 ob2.operator=(ob1)
//	cout << ob2.x << "," << ob2.y << endl;
//	cout << ob3.x << "," << ob3.y << endl;
//	return 0;
//}
