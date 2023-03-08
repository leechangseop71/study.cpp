//01 복사생성자 예제

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
//		cout << "SoSlmple(int x, int y) 생성자 호출!" << endl;
//	}
//	//디폴트 복사생성자
//	SoSlmple(const SoSlmple& ref) {
//		cout << "디폴트 복사 생성자 호출!" << endl;
//		this->x = ref.x;
//		this->y = ref.y;
//	}
//};
//int main()
//{
//	//일반 자료형 복사
//	//int num1 = 10;
//	//int num2 = num1;
//	//int num3(num2);	//C++에서 허용되는 문법..num3변수생성시 num2값을 초기값으로 복사함
//	//cout << num1 << num2 << num3 << endl;
//
//	//객체 복사생성자 호출 초기값 부여
//	SoSlmple obj1(1, 2);
//	SoSlmple obj2 = obj1;	// SoSlmple obj2(obj1) 디폴트 복사생성자의 호출
//	SoSlmple obj3(obj2);	//디폴트 복사생성자의 호출
//	cout << obj2.x << "," << obj2.y << endl;
//	cout << obj3.x << "," << obj3.y << endl;
//
//	return 0;
//}

//02 문제

//#include <iostream>
//using namespace std;
//class SimpleA {
//public:
//	int x;
//	int y;
//	SimpleA(int a, int b) :x(a), y(b) {}
//	//디폴트 생성자 선언부(x=0 , y만복사)
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
//	//디폴트 생성자 선언부(x복사,y=0);
//	SimpleB(const SimpleB& ref) {
//		this->x = ref.x;
//		this->y = 0;
//	}
//};
//int main()
//{
//	SimpleA obj1(10, 20);
//	SimpleA obj2 = obj1;	//복사생성자 호출 시점
//	cout << obj2.x << "," << obj2.y << endl << endl;	
//	SimpleB obj3(30, 40);
//	SimpleB obj4(obj3);		//복사생성자 호출 시점
//	cout << obj4.x << "," << obj4.y << endl << endl;
//	return 0;
//}


//03 복사생성자 호출 시점 - 매개변수일때 호출되는 복사생성자

//#include <iostream>
//using namespace std;
//class SimpleA {
//public:
//	int x;
//	int y;
//	SimpleA(int a, int b) :x(a), y(b) {
//		cout << "SimpleA(int a, int b) 생성자호출" << endl;
//	}
//	SimpleA(const SimpleA& ref) {
//		this->x = ref.x;
//		this->y = ref.y;
//		cout << "복사생성자 호출!!" << endl;
//	}
//	void func(SimpleA obj)  //SimpleA obj = ob2; -> SimpleA obj(ob2);
//	{
//		cout << "func함수 호출!" << endl;
//	}
//};
//int main()
//{
//	SimpleA ob1(10, 20);
//	SimpleA ob2(30, 40);
//	ob1.func(ob2); //call-by-value(객체)
//
//	return 0;
//}


//04 반환형이 클래스자료형이면서 객체값이 전달될때 - 호출한 위치에 임시객체생성과 복사생성자를 통한 값초기화

//#include <iostream>
//using namespace std;
//class SimpleA {
//public:
//	int x;
//	int y;
//	SimpleA(int a, int b) :x(a), y(b) {
//		cout << "SimpleA(int a, int b) 생성자호출" << endl;
//	}
//	SimpleA(const SimpleA& ref) {
//		this->x = ref.x;
//		this->y = ref.y;
//		cout << "복사생성자 호출!!" << endl;
//	}
//	SimpleA func() 
//	{
//		return *this;
//	}
//
//};
//int main()
//{
//	SimpleA ob1(10, 20); //SimpleA(int a, int b) 생성자호출
//	
//	ob1.func(); //복사생성자 호출!!
//
//
//	return 0;
//}